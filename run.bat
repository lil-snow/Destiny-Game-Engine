@Echo off
cd Engine
:COMPILE
g++ src/Engine/EntryPoint.cpp -o bin/Engine.exe
cd bin
Engine.exe
cd ..
pause
goto COMPILE