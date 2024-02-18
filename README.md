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

<div align="center">
	
## Announcement
   Due to [Vanguard's Implementation](https://support-leagueoflegends.riotgames.com/hc/en-us/articles/24169857932435-Riot-Vanguard-League-of-Legends), Sakura is no longer supported. Thank you everyone for using it.
   
</div>

## ℹ About
- This repository provides the core functionality of the TFT skin changer, with a hardcoded skin database.
- The full source code can be found [here](https://github.com/Sakurasou-Group/Sakura).

## Features
- Change skin/model of your little legend.
- Change skin/model for everyone in the lobby.
- Change anytime and unlimited times in single game.
- Supports all server languages.
- <a href="https://github.com/ocornut/imgui">ImGui</a> for in-game drawing.
- <a href="https://github.com/nlohmann/json">JSON</a> based configuration saving & loading.

## Getting Started
### Public Release
1. Head over to the [releases page](https://github.com/rumi-chan/Sakura/releases)
2. Download the latest binaries

### Github Release
1. Log in to your [Github](https://github.com/) account
2. Head over to the [Action](https://github.com/rumi-chan/Sakura/actions) page
3. Click **Publish** workflow
4. Select most recent workflow with green checkmark ✔
	<p align="center">
	  <a href="#"><img src="https://github.com/rumi-chan/Sakura/assets/59478113/24fee534-1c48-4538-a966-e3c875c7ef35"></a>
	</p>
5. Download **Sakura** in **Artifacts** section
	<p align="center">
	  <a href="#"><img src="https://github.com/rumi-chan/Sakura/assets/59478113/a01cfc4b-d9e2-4503-8f36-3cbae8208484"></a>
	</p>

## Usage
### Using injector
1. Ensure that `Sakura.dll` is in the same folder that `Sakura.Launcher.exe`.
2. Run `Sakura.Launcher.exe`.
3. Find a match and wait until you get to the loading screen and `LeagueGame Status` shows `Found` then press `Start`.
4. After entering the arena, press <kbd>F1</kbd> to open the Sakura GUI.
### Renaming DLL
1. Rename `Sakura.dll` to `hid.dll`.
2. Place it in the League of Legends Game folder. (e.g. C:\Riot Games\League of Legends\Game).
3. After entering the arena, press <kbd>F1</kbd> to open the Sakura GUI.

## Contributing
1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. [Open a Pull Request](https://github.com/rumi-chan/Sakura/pulls)
> DM me through Discord if you want to contribute to the public version.

## Build from source

### Prerequisites
- Visual Studio 2022
  - Desktop development with C++
  - .NET desktop development
  - Windows 10 SDK

### Initial Steps
- Clone the repository:
  
  ```
  git clone https://github.com/rumi-chan/Sakura
  ```
### Build Steps
- Open `Sakura.sln`
- Right-click on the solution -> `Build solution`

## FAQs
### Can I get banned?
- Use at your own risk.
- However, there have been no bans in the ~2 year period that we have been using the method behind **R3nzSkin** and **Sakura**. So far **Sakura** is safe and undetected.
### Regions support?
- All regions, including **Tencent** server.
### Is Sakura a virus?
- Definitely not. It's a false positive. **Sakura** is open-source, you can also use your compiled version as well.
- Do not download **Sakura** from anywhere other than this repository. I am not responsible if your computer is infected with viruses by downloading **Sakura** from elsewhere.
> The skin changer as well as the injector uses some Win32 API's that aren't commonly used in normal programs. The project is open-source, so you are welcome to compile the skin changer on your own, otherwise disable your antivirus and add the folder with the binaries to the exclusion list.
### Why did you stop updating the source code?
- There are idiots selling copies of **Sakura** so I decided to stop updating the source code.
- But that doesn't mean I won't update **Sakura**. And every version I will update the offsets for you to compile yourself if you don't trust me.
- The source code only supports English, while the binary release supports all Riot server languages and has more utilities.
### How can I contribute?
- Just fork the repo and open a pull request or DM me through Discord. I will review it and give you access to the latest source code.
### Give Sakura a star if you like it :)

## Credits
   This program is an updated version of the <a href="https://github.com/R3nzTheCodeGOD">R3nzTheCodeGOD</a>/<a href="https://github.com/R3nzTheCodeGOD/R3nzSkinTFT">R3nzSkinTFT</a> project since his military service.
