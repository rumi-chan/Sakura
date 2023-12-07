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
    <a href="https://discord.gg/C2fXemxsrG">
      <img src ="https://img.shields.io/discord/1180488468359544912?style=for-the-badge&logo=discord&logoColor=white&label=discord&color=5c5fff"/>
    </a>
    <a href="./LICENSE">
      <img src ="https://img.shields.io/github/license/rumi-chan/Sakura.svg?style=for-the-badge"/>
    </a>
  </p>
</div>
<br>

<img src="https://i.imgur.com/jXVsaYR.png">

## Features
- Change skin/model of your little legend.
- Change skin/model for everyone in the lobby.
- Change anytime and unlimited times in single game.
- Supports all server languages.
- <a href="https://github.com/ocornut/imgui">ImGui</a> for in-game drawing.
- <a href="https://github.com/nlohmann/json">JSON</a> based configuration saving & loading.

## Usage
   1. Compile source or <a href="https://github.com/rumi-chan/Sakura/releases/latest">download</a> compiled version.
   2. Use `Sakura_Injector` or rename `Sakura.dll` to `hid.dll` to inject the resulting DLL into the game yourself.
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
> DM me if you want to contribute to the public version.

## Building
### Prerequisites
- Visual Studio 2022
  - Desktop development with C++
  - Windows 10 SDK
- Source for the injector
  - https://github.com/R3nzTheCodeGOD/R3nzSkin/tree/main/R3nzSkin_Injector

## FAQs
### Can I get banned?
- Use at your own risk.
- However, there have been no bans in the ~2 year period that we have been using the method behind R3nzSkin and Sakura. So far Sakura is safe and undetected.
### Regions support?
- All regions, including Tencent server.
### Is Sakura a virus?
- Definitely not. It's a false positive. Sakura is open-source, you can also use your compiled version as well.
- Do not download Sakura from anywhere other than this repository. I am not responsible if your computer is infected with viruses by downloading Sakura from elsewhere.
> The skin changer as well as the injector uses some Win32 API's that aren't commonly used in normal programs. The project is open-source, so you are welcome to compile the skin changer on your own, otherwise disable your antivirus and add the folder with the binaries to the exclusion list.
### Why did you stop updating the source code?
- There are idiots selling copies of Sakura so I decided to stop updating the source code.
- But that doesn't mean I won't update Sakura. And every version I will update the offsets for you to compile yourself if you don't trust me.
- The source code only supports English, while the binary release supports all Riot server languages and has more utilities.
### How can I contribute?
- Just fork the repo and open a pull request or DM me through Discord. I will review it and give you access to the latest source code.
### Give Sakura a star if you like it :)

## Credits
   This program is an updated version of the <a href="https://github.com/R3nzTheCodeGOD">R3nzTheCodeGOD</a>/<a href="https://github.com/R3nzTheCodeGOD/R3nzSkinTFT">R3nzSkinTFT</a> project since his military service.
