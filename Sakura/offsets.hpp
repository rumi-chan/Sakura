#pragma once

#include <cstdint>

namespace offsets {
	namespace gameObject {
		inline std::uint64_t name{ 0x60 };
	};

	namespace global {
		inline std::uint64_t LocalPlayer{ 0 };
		inline std::uint64_t Riot__g_window{ 0 };
		inline std::uint64_t GameClient{ 0 };
	};

	namespace AIBaseCommon {
		inline std::uint64_t CharacterDataStack{ 0 };
	};

	namespace MaterialRegistry {
		inline std::uint64_t SwapChain{ 0 };
	};

	namespace functions {
		inline std::uint64_t FnRiot__Renderer__MaterialRegistry__GetSingletonPtr{ 0 };
		inline std::uint64_t FnCharacterDataStack__Push{ 0 };
	};
};
