#include <Windows.h>
#include <cstdint>

#include "CharacterDataStack.hpp"
#include "../CheatManager.hpp"
#include "../offsets.hpp"

void CharacterDataStack::push(const char* model, const std::int32_t skin) noexcept
{
	using push_t = __int64(__fastcall*)(std::uintptr_t, const char*, std::int32_t, std::int32_t, bool, bool, bool, bool, bool, bool, std::int8_t, const char*, std::int32_t, const char*, std::int32_t, bool, std::int32_t);
	static const auto _push{ reinterpret_cast<push_t>(cheatManager.memory->moduleBase + offsets::functions::FnCharacterDataStack__Push) };
	_push(std::uintptr_t(this), model, skin, 0, false, false, false, false, true, false, -1, "\x00", 0, "\x00", 0, false, 1);
}
