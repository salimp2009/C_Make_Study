#include <iostream>
#include <string>

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
//$ cd build
//$ cmake -G Xcode ..

// these commands creates neccessar Cmake files and Xcode project file
// to build the executable we can either open Xcode project file and build from IDE or
//  run Cmake command;
// $ cmake --build .


int main()
{
	std::string greetings{"Hello Cmake"};
    std::cout<<greetings<<'\n';

	return 0;
}