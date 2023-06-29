<br>
<div align="center">
    <img src="https://i.imgur.com/aF3urSc.png" width="144">
  <h1 align="center">Sakura</h1>
  <p align="center">
    <strong>Internal pet changer</strong> for <a href="https://teamfighttactics.leagueoflegends.com/">Teamfight Tactics</strong>
  </p>
  <p>
    <a href="https://github.com/rumi-chan/Sakura">
      <img src="https://img.shields.io/github/stars/rumi-chan/Sakura.svg?style=for-the-badge" />
    </a>
    <a href="./LICENSE">
      <img src ="https://img.shields.io/github/license/rumi-chan/Sakura.svg?style=for-the-badge"/>
    </a>
  </p>
</div>
<br>

<img src="https://i.imgur.com/rWG6LPD.png">

## Features
- Change the skin/model of your little legend.
- Change anytime and unlimited times in single game.
- <a href="https://github.com/ocornut/imgui">ImGui</a> for in-game drawing.
- <a href="https://github.com/nlohmann/json">JSON</a> based configuration saving & loading

## Usage
   1. Compile source or <a href="https://github.com/rumi-chan/Sakura/releases/latest">download</a> compiled version.
   2. Use `Sakura_Injector` or inject the resulting DLL into the game yourself.
      - *Administrator* privilege may be needed if failed to inject.
      - League client can crash if injected before going into arena.
         - A workaround is to not inject until you are in the arena (you will need to be fast to not disrupt the game).
   3. Press <kbd>F1</kbd> to bring up the menu.
   4. Select skin/model for your pet.


## Contributing
1. Fork the Project
1. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
1. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
1. Push to the Branch (`git push origin feature/AmazingFeature`)
2. [Open a Pull Request](https://github.com/rumi-chan/Sakura/pulls)

## Building
### Prerequisites
- Visual Studio 2022
  - Desktop development with C++
  - Windows 10 SDK
- Source for the injector
  - https://github.com/R3nzTheCodeGOD/R3nzSkin/tree/main/R3nzSkin_Injector

## Credits
   This program is an updated version of the <a href="https://github.com/R3nzTheCodeGOD">R3nzTheCodeGOD</a>/<a href="https://github.com/R3nzTheCodeGOD/R3nzSkinTFT">R3nzSkinTFT</a> project since his military service.
