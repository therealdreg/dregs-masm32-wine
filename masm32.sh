#!/bin/bash
{
PP="programs"
echo ""
cp $PP/$1.asm ./
echo "Mounting..."
echo ""
wine ml.exe -c -Zi -Fl -nologo /coff $1.asm
echo ""
echo "Linking..."
echo ""
wine link.exe /DEBUG /MAP /SUBSYSTEM:CONSOLE libs/Kernel32.Lib libs/User32.lib libs/Irvine32.lib libs/winmm.lib $1.obj
echo "Executing..."
echo ""
cp -R ./res/* /tmp/
mv ./$1.exe /tmp/$1.exe
wineconsole /tmp/$1.exe
cp *.ro /tmp/
rm $1.*
}  2>&1 | tee logmasm32.log

