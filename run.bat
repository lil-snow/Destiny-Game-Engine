@Echo off
cd Destiny
:COMPILE
echo .
echo .
echo .
g++ src/Destiny/EntryPoint.cpp -o bin/Destiny.exe
cd bin
Destiny.exe
cd ..
pause
goto COMPILE