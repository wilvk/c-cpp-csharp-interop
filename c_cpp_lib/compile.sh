rm *.o &2> /dev/null

g++ -c test.cpp
gcc -c main.c
gcc -o main main.o test.o
