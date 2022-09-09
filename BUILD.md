# Building on Linux
To build on Linux run the following after cloning the repo and moving into it

    mkdir ./build
    cd ./build
    cmake ../src
    make
This will output an executable file named converter 

# Building on Windows
The easiest way to do it is to install Visual Studio and the C++ tools then clone this repo with Visual Studio because it'll automatically generate the CMake config so you can build it in Visual Studio.

You can then click Build then Build All, which will produce an executable file named converter.exe

It'll be located here
>   %UserProfile%\source\repos\retroarch-ar-code-converter\src\out\build\x64-Debug\

At least that's the way I did it