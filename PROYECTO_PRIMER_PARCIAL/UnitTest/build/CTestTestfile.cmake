# CMake generated Testfile for 
# Source directory: C:/Users/luis1/Documents/EDD-Burbano-Condor-7999/PROYECTOS/1er Parcial/UnitTest
# Build directory: C:/Users/luis1/Documents/EDD-Burbano-Condor-7999/PROYECTOS/1er Parcial/UnitTest/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(UnitTests "runUnitTests")
set_tests_properties(UnitTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/luis1/Documents/EDD-Burbano-Condor-7999/PROYECTOS/1er Parcial/UnitTest/CMakeLists.txt;13;add_test;C:/Users/luis1/Documents/EDD-Burbano-Condor-7999/PROYECTOS/1er Parcial/UnitTest/CMakeLists.txt;0;")
subdirs("ext/googletest")
