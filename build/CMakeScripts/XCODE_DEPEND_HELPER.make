# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.hello_cmake.Debug:
/Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/Debug/hello_cmake:
	/bin/rm -f /Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/Debug/hello_cmake


PostBuild.hello_cmake.Release:
/Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/Release/hello_cmake:
	/bin/rm -f /Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/Release/hello_cmake


PostBuild.hello_cmake.MinSizeRel:
/Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/MinSizeRel/hello_cmake:
	/bin/rm -f /Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/MinSizeRel/hello_cmake


PostBuild.hello_cmake.RelWithDebInfo:
/Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/RelWithDebInfo/hello_cmake:
	/bin/rm -f /Users/salimp/Documents/CMake_Game_Robotic_Embedded_C++_PackIT/cmake_study/chapter1/build/RelWithDebInfo/hello_cmake




# For each target create a dummy ruleso the target does not have to exist
