rm *.o &2> /dev/null

g++ -g -c test.cpp                # compiling a C library
g++ -g -c main.cpp                # compiling our C++ applicatiion
g++ -o main main.o test.o
