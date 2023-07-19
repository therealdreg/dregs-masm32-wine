# dregs-masm32-wine

Dreg's fork Simple installer to run MASM on linux via terminal

This is a simple shell script that compile, link and execute masm32 programs with ml.exe

## Installation

```
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get -y install wine wine32:i386
export WINEPREFIX=~/.wine && WINEARCH=win32 winecfg
```

Clone this repo

Copy your .asm program to programs/ directory

```
cd dregs-masm32-wine
sh masm32.sh program_name_without_dot_asm
```
## Important
* Place your
* programs under the folder `programs`
* Place all your libs and includes under `libs`
	* You need to create this folder and put your `libs` and `inc` here (like `Irvine32.inc`)
* Run `masm32.sh` without .asm extension
* There are a few examples in this project, you can read them to see how it works


