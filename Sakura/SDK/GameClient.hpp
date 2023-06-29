#pragma once

#include <cstdint>

#include "GameState.hpp"
#include "Pad.hpp"

class GameClient {
	PAD(0xC)
	GGameState_s gameState;
	//PAD(0x28)
	//std::int32_t mapId;
};
