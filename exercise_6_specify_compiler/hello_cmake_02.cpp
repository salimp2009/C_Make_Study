#include <iostream>
#include <string>
#include "message.hpp"

// sample project for studying CMake
// after creating this cpp file we create CmakeLists.txt file (case sensitive) in the same directory
// then run the commands below;
// $ mkdir -p build d		// this line creates a build directory under the parent -p
// $ cd build				// go into build director and run cmake ..
// $ cmake ..				// cmake .. tells to search for source and txt file under the root

// alternative we could run Cmake as ;
// $ cmake -H. -Bbuild		// -H mean search source & txt in the root and 
							//-Bbuild tells to create file inside the build directory

// to create  a specific generator which means the files needed for IDE specific files
// such as XCode project or soln files for Windows or Ninja for other IDEs
// $ mkdir -p build
// $ cd build
// $ cmake -G Xcode ..

// these commands creates neccessar Cmake files and Xcode project file
// to build the executable we can either open Xcode project file and build from IDE or
// run Cmake command;
// $ cmake --build .

// if a CONDITIONALS are used then use the following options command
// $ mkdir -p build
// $ cd build
// $ cmake -D USE_LIBRARY=ON ..

// The -D switch is used to set any type of variable for CMake: logicals, paths, and so forth.

// Compiler selection can be done 2 ways;
// 1- By using the -D option in the CLI, for example:
// $ cmake -D CMAKE_CXX_COMPILER=clang++ ..

// 2-By exporting the environment variables CXX for the C++ compiler, CC for the C compiler, and FC for the Fortran compiler. For example, use this command to use clang++ as the C++ compiler:
// $ env CXX=clang++ cmake ..

// CMake offers the --system-information flag, which will dump all information about your system to the screen or a file. 
// To see this, try the following on command line:
// $ cmake --system-information information.txt



int main()
{
	Message message1("Hello Cmake....");
	Message message2("this chapter2-Exercise 2_Static Library");
	Message message3("Goodbye....");

	std::cout<<message1;
	std::cout<<message2;
	std::cout<<message3;

	std::cout<<'\n';
	return 0;
}