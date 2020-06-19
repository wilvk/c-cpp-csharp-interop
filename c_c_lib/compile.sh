rm *.o &2> /dev/null

gcc -g -c test.c
gcc -g -c main.c
gcc -o main main.o test.o
