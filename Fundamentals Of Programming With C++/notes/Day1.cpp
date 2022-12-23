// online C++ compiler
// https://cpp.sh/


//** Install Compiler And Debugger **//
//** Links **//

/* [1]
install MSYS2 
Software Distribution and Building Platform for Windows

https://www.msys2.org/
*/

// Now MSYS2 is ready for you and a terminal for the UCRT64 environment will launch.

/* [2]
install
pacman -Syu
*/

/* [3]
install
pacman -Su
*/

/* [4]
run in MINGW64
pacman -Ss gcc

then run
pacman -S mingw-w64-x86_64-gcc

((GNU Compiler Collection (C,C++,OpenMP) for MinGW-w64))
*/

/* [5]
run in MINGW64
pacman -Ss gdb

then run
pacman -S mingw-w64-x86_64-gdb

(( GNU Debugger (mingw-w64) ))
*/

/* [6]
run in MINGW64 these comands one by one

gcc --version
g++ --version
gdb --version
*/

/* [7]
Edit System Variables

step1
go to System Properties

step2
click on Advanced tap 

step3
open Environment Variables

step4
in System variables section
click on path 
and past this as a new path 
C:\msys64\mingw64\bin
and hit ok and we're DONE
*/


