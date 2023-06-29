#include <cstdint>
#include <string>
#include <mutex>
#include <vector>
#include <variant>
#include <tuple>

#include "imgui/imgui.h"
#include "imgui/imgui_stdlib.h"

#include "CheatManager.hpp"
#include "GUI.hpp"
#include "Memory.hpp"
#include "SkinDatabase.hpp"
#include "Utils.hpp"

inline void footer() noexcept
{
	ImGui::Separator();
	ImGui::textUnformattedCentered((std::string("Last Update: ") + __DATE__ + " - " + __TIME__).c_str());
	ImGui::textUnformattedCentered("Sakura TFT Skin Changer");
}

void GUI::render() noexcept
{
	static const auto player{ cheatManager.memory->localPlayer };
	static bool show_app_style_editor = false;
	if (show_app_style_editor) {
		ImGui::ShowStyleEditor();
		ImGui::End();
	}
	static bool show_log = false;
	if (show_log) {
		ImGui::Begin("Log", nullptr);
		cheatManager.logger->draw();
	}
	static const auto vectorGetter = [](void* vec, std::int32_t idx, const char** out_text) noexcept
	{
		//temporarily removed
		//const auto& vector{ *static_cast<std::vector<SkinDatabase::PetsInfo>*>(vec) };
		//if (idx < 0 || idx > static_cast<std::int32_t>(vector.size())) return false;
		//*out_text = idx == 0 ? "Default" : vector.at(idx - 1).skinName;
		return true;
	};

	std::call_once(this->changeSkin, [&]() noexcept -> void {
		const auto& pet{ cheatManager.database->pets[cheatManager.config->currentComboSkinIndex - 1] };
		std::int32_t count{ 0 };
		if (std::holds_alternative<std::int32_t>(pet.skinCount))
			count = std::get<std::int32_t>(pet.skinCount);
		else if (std::holds_alternative<std::pair<std::int32_t, std::int32_t>>(pet.skinCount))
			count = std::get<std::pair<std::int32_t, std::int32_t>>(pet.skinCount).second;

		if (cheatManager.config->currentComboSkinIndex > 0 && cheatManager.config->curretSkinId > count)
			cheatManager.config->curretSkinId = 1;

		if (cheatManager.config->currentComboSkinIndex > 0)
			player->changeSkin(cheatManager.database->pets[cheatManager.config->currentComboSkinIndex - 1].modelName, cheatManager.config->curretSkinId);
	});

	ImGui::Begin("Sakura", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_AlwaysAutoResize);
	if (ImGui::BeginTabBar("TabBar", ImGuiTabBarFlags_Reorderable | ImGuiTabBarFlags_FittingPolicyScroll | ImGuiTabBarFlags_NoTooltip)) {

		if (ImGui::BeginTabItem("About")) {
			ImGui::Text("Founder:");
			ImGui::SameLine();
			ImGui::TextColored(ImColor(0, 102, 255, 255), "R3nzTheCodeGOD");

			ImGui::Text("Main developer and updater:");
			ImGui::SameLine();
			ImGui::TextColored(ImColor(0, 102, 255, 255), "Rumi");
			footer();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Skin Changer")) {
			if (ImGui::Combo("Current Pet", &cheatManager.config->currentComboSkinIndex, vectorGetter, static_cast<void*>(&cheatManager.database->pets), cheatManager.database->pets.size() + 1)) {
				const auto& pet{ cheatManager.database->pets[cheatManager.config->currentComboSkinIndex - 1] };
				if (std::holds_alternative<std::int32_t>(pet.skinCount))
					cheatManager.config->curretSkinId = 1;
				else if (std::holds_alternative<std::pair<std::int32_t, std::int32_t>>(pet.skinCount))
					cheatManager.config->curretSkinId = std::get<std::pair<std::int32_t, std::int32_t>>(pet.skinCount).first;
			}

			const auto& pet{ cheatManager.database->pets[cheatManager.config->currentComboSkinIndex - 1] };
			if (std::holds_alternative<std::int32_t>(pet.skinCount)) {
				ImGui::SliderInt("Current Skin", &cheatManager.config->curretSkinId, 1, std::get<std::int32_t>(pet.skinCount));
			}
			else if (std::holds_alternative<std::pair<std::int32_t, std::int32_t>>(pet.skinCount)) {
				const auto pair{ std::get<std::pair<std::int32_t, std::int32_t>>(pet.skinCount) };
				ImGui::SliderInt("Current Skin", &cheatManager.config->curretSkinId, pair.first, pair.second);
			}

			if (ImGui::Button("Henshin!"))
				player->changeSkin(cheatManager.database->pets[cheatManager.config->currentComboSkinIndex - 1].modelName, cheatManager.config->curretSkinId);
			footer();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Misc")) {
			ImGui::InputText("##pushmanualmodel", &this->manualModel);
			ImGui::SameLine();
			if (ImGui::Button("Push Manual Model"))
				player->changeSkin(this->manualModel.c_str(), 1);
			ImGui::Separator();
			ImGui::InputText("Change Nick", player->getNamePtr());
			ImGui::Separator();
			ImGui::hotkey("Menu Key", cheatManager.config->menuKey);
			ImGui::Separator();
			ImGui::Checkbox("Show style editor", &show_app_style_editor);
			ImGui::Checkbox("Show log", &show_log);
			if (ImGui::Button("Force Close"))
				cheatManager.hooks->uninstall();
			footer();
			ImGui::EndTabItem();
		}
	}
	ImGui::End();
}
