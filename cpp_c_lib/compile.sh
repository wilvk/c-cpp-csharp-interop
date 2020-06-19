rm *.o &2> /dev/null

gcc -g -c test.c                # compiling a C library
g++ -g -c main.cpp              # compiling our C++ applicatiion
g++ -v -o main main.o test.o
