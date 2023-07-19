# dregs-masm32-wine

Dreg's fork Simple tool to build using MASM (Masm32v11r) & run on linux via terminal.   Based from olivatooo masm32-wine project, very handy for github action pipeline.

This is a simple shell script that compile, link and execute masm32 programs with ml.exe

Forked from: https://github.com/olivatooo/masm32-wine

## Installation

```
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get -y install wine wine32:i386
export WINEPREFIX=~/.wine && WINEARCH=win32 winecfg
```

Clone this repo

## Use

Copy your .asm program to **dregs-masm32-wine/programs/** directory

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


