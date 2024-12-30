# CMake + SFML
## Intro
This project runs a basic sfml project that loads up a font and prints a Hello and a addition/ subtraction result. You may notice that the code is structured in a weird way for the project to emulate being  complicated as a bigger project would be. I will also be using what I learned here in another project of mine. It may not be optimal even now, and I'd love feedback.

## How to run it:
Just run GenerateAndBuild.bat, and you'll find the executable at `${build\src\CalcMod\Driver\Debug\GameTarget.exe}` 
if not on Windows, just run these commands:
```sh
mkdir build
cd build
cmake ..
cmake --build .
```

## Note:
the CMake version I used is 3.30-rc3, you may try your own version.
Atleast CMake 3.11 is required for "FetchContent" that I use to get sfml from github (not tested). Cheers!

## Motivation:
 I discovered my SFML (and other c++ projects) don't work out of the box on other machines.