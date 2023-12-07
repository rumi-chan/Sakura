#pragma once

#include <Windows.h>
#include <cstdint>
#include <d3d9.h>
#include <d3d11.h>

#include "Offsets.hpp"
#include "SDK/AIBaseCommon.hpp"
#include "SDK/GameClient.hpp"
#include "SDK/Pad.hpp"

class offset_signature {
public:
	std::vector<std::string> pattern;
	bool sub_base;
	bool read;
	bool relative;
	std::int32_t additional;
	std::uint64_t* offset;
};

class Memory {
public:
	void Search(bool gameClient = true);

	std::uintptr_t moduleBase;
	HWND riotWindow;
	GameClient* client;
	AIBaseCommon* localPlayer;
	IDirect3DDevice9* d3dDevice;
	IDXGISwapChain* swapChain;
private:
	void update(bool gameClient = true) noexcept;

	std::uintptr_t materialRegistry;

	std::vector<offset_signature> gameClientSig
	{
		{
			{
				{
					"48 8B 05 ? ? ? ? 4C 8B FA 83 78 0C 02"
				}, true, false, true, 0, & offsets::global::GameClient
			}
		}
	};

	std::vector<offset_signature> sigs
	{
		{
			{
				"48 8B 3D ? ? ? ? 48 3B CF"
			}, true, false, true, 0, & offsets::global::LocalPlayer
		},
		{
			{
				"48 8B 0D ? ? ? ? FF 15 ? ? ? ? 48 8B 05 ? ? ? ?"
			}, true, false, true, 0, &offsets::global::Riot__g_window
		},
		{
			{
				"48 8D 8B ? ? ? ? 48 89 44 24 ? C7 44 24"
			}, false, true, false, 0, &offsets::AIBaseCommon::CharacterDataStack
		},
		{
			{
				"48 8B 8F ? ? 00 00 45 33 C0 8B D3 48 8B 01 FF 90 ? ? 00 00"
			}, false, true, false, 0, &offsets::MaterialRegistry::D3DDevice
		},
		{
			{
				"48 8D BB ? ? ? ? C6 83 ? ? ? ? ? 0F 84"
			}, false, true, false, 0, &offsets::MaterialRegistry::SwapChain
		},
		{
			{
				"E8 ? ? ? ? 8B 57 44"
			}, true, false, false, 0, &offsets::functions::FnRiot__Renderer__MaterialRegistry__GetSingletonPtr
		},
		{
			{
				"E8 ? ? ? ? 41 8B 97 ? ? ? ? 48 8B 0D ? ? ? ?"
			}, true, false, false, 0, &offsets::functions::FnCharacterDataStack__Push
		}
	};
};

