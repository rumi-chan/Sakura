#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include <variant>
#include <utility>

class SkinDatabase {
public:
	class PetsInfo {
	public:
		const char* modelName;
		const char* skinName;
		std::variant<std::int32_t, std::pair<std::int32_t, std::int32_t>> skinCount{ 1 };
	};

	// PetModelName, PetName, PetSkinCount(manual update)
	std::vector<PetsInfo> pets{
		{ "PetAkaliDragon",		"Ossia",			std::make_pair(1, 21)},
		{ "PetAoShin",			"Ao Shin",			std::make_pair(1, 51)},
		{ "PetBallDragon",		"Poggless",			std::make_pair(1, 21)},
		{ "PetBaron",			"Baron",			std::make_pair(3, 3)}, // wtf riot
		{ "PetBellSwayer",		"Bell Swayer",			std::make_pair(1, 23)},
		{ "PetBigKnifeDog",		"Knife Hound",			std::make_pair(1, 18)},
		{ "PetBuglet",			"Flutterbug",			std::make_pair(1, 22)},
		{ "PetBunny",			"Bun Bun",			std::make_pair(1, 33)},
		{ "PetChibiAatrox",		"Chibi Aatrox",			std::make_pair(1, 2) },
		{ "PetChibiAhri",		"Chibi Ahri",			std::make_pair(1, 3)},
		{ "PetChibiAkali",		"Chibi Akali",			std::make_pair(1, 2)},
		{ "PetChibiAnnie",		"Chibi Annie",			std::make_pair(1, 2)},
		{ "PetChibiAshe",		"Chibi Ashe",			std::make_pair(1, 2)},
		{ "PetChibiEkko",		"Chibi Ekko",			std::make_pair(1, 1)},
		{ "PetChibiEzreal",		"Chibi Ezreal",			std::make_pair(1, 2)},
		{ "PetChibiGwen",		"Chibi Gwen",			std::make_pair(1, 2)},
		{ "PetChibiIrelia",		"Chibi Irelia",			std::make_pair(1, 2)},
		{ "PetChibiJinx",		"Chibi Jinx",			std::make_pair(1, 2)},
		{ "PetChibiKaisa",		"Chibi Kai'Sa",			std::make_pair(1, 3)},
		{ "PetChibiLeeSin",		"Chibi Lee Sin",		std::make_pair(1, 3)},
		{ "PetChibiLux",		"Chibi Lux",			std::make_pair(1, 3)},
		{ "PetChibiMalphite",		"Chibi Malphite",		std::make_pair(1, 2)},
		{ "PetChibiMorgana",		"Chibi Morgana",		std::make_pair(1, 2)},
		{ "PetChibiSett",		"Chibi Sett",			std::make_pair(1, 2)},
		{ "PetChibiSona",		"Chibi Sona",			std::make_pair(1, 2)},
		{ "PetChibiTeemo",		"Chibi Teemo",			std::make_pair(1, 2)},
		{ "PetChibiTristana",		"Chibi Tristana",		std::make_pair(1, 2)},
		{ "PetChibiVi",			"Chibi Vi",			std::make_pair(1, 1)},
		{ "PetChibiYasuo",		"Chibi Yasuo",			std::make_pair(1, 3)},
		{ "PetChibiYone",		"Chibi Yone",			std::make_pair(1, 2)},
		{ "PetChibiZed",		"Chibi Zed",			std::make_pair(1, 2)},
		{ "PetChoncc",			"Choncc",			std::make_pair(1, 51)},
		{ "PetCreepyCat",		"Whisker",			std::make_pair(1, 30)},
		{ "PetDowsie",			"Dowsie",			std::make_pair(1, 51)},
		{ "PetDsSquid",			"Squink",			std::make_pair(1, 57)},
		{ "PetDsSwordGuy",		"Abyssia",			std::make_pair(1, 21)},
		{ "PetDsWhale",			"Starmaw",			std::make_pair(1, 21)},
		{ "PetDuckBill",		"Duckbill",			std::make_pair(1, 54)},
		{ "PetElegantDragon",		"Prancie",			std::make_pair(1, 33)},
		{ "PetFairy",			"Nixie",			std::make_pair(1, 23)},
		{ "PetFenroar",			"Fenroar",			std::make_pair(1, 33)},
		{ "PetGargoyle",		"Craggle",			std::make_pair(1, 21)},
		{ "PetGemTiger",		"Protector",			std::make_pair(1, 23)},
		{ "PetGhosty",			"Hauntling",			std::make_pair(1, 36)},
		{ "PetGloop",			"Gloop",			std::make_pair(1, 42)},
		{ "PetGriffin",			"Silverwing",			std::make_pair(1, 37)},
		{ "PetGrumpyLion",		"Furyhorn",			std::make_pair(1, 46)},
		{ "PetHextechBirb",		"Tocker",			std::make_pair(1, 23)},
		{ "PetHundun",		        "Hundun",			std::make_pair(1, 18)},
		{ "PetJawDragon",		"Burno",			std::make_pair(1, 33)},
		{ "PetKoala",			"Grizzle",			std::make_pair(1, 18)},
		{ "PetLeopardGecko",		"Poptail",			std::make_pair(1, 18)},
		{ "PetMiner",			"Molediver",			std::make_pair(1, 30)},
		{ "PetMiniGolem",		"Runespirit",			std::make_pair(1, 22)},
		{ "PetNimbleFoot",		"Nimblefoot",			std::make_pair(1, 30)},
		{ "PetOwl",			"Noctero",			std::make_pair(1, 18)},
		{ "PetPegasus",			"Lightcharger",			std::make_pair(1, 57)},
		{ "PetPenguKnight",		"Featherknight",		std::make_pair(1, 71)},
		{ "PetPixiMander",		"Piximander",			std::make_pair(1, 24)},
		{ "PetPoro",			"Poro",				std::make_pair(1, 6)},
		{ "PetPoroFluft",		"Fluft of Poros",		std::make_pair(1, 1)},
		{ "PetPupDragon",		"Bungo",			std::make_pair(1, 18)},
		{ "PetQiyanaDog",		"QiQi",				std::make_pair(1, 33)},
		{ "PetRazorBeak",		"Raptors",			std::make_pair(1, 18)},
		{ "PetScratch",		        "Scratch",			std::make_pair(1, 1)},
		{ "PetScuttleCrab",		"Scuttle",			std::make_pair(1, 18)},
		{ "PetSennaBunny",		"Melisma",			std::make_pair(1, 40)},
		{ "PetSgCat",			"Dango",			std::make_pair(1, 48)},
		{ "PetSgPig",			"Fuwa",				std::make_pair(1, 40)},
		{ "PetSgShisa",			"Shisa",			std::make_pair(1, 42)},
		{ "PetShark",			"Shork",			std::make_pair(1, 18)},
		{ "PetSmolKnifeDog",	        "Knife Pup",		        std::make_pair(1, 18)},
		{ "PetSpiritFox",		"Hushtail",			std::make_pair(1, 45)},
		{ "PetTftAvatar",		"River Sprite",			std::make_pair(1, 21)},
		{ "PetTurtle",			"Paddlemar",			std::make_pair(1, 33)},
		{ "PetUmbra",			"Umbra",			std::make_pair(1, 57)},
		{ "PetVoidEye",			"Khat'Sai",			std::make_pair(1, 18)},
		//Other models
		{ "TFT_ElderDragon",	        "Elder Dragon"							 }
	};
};
