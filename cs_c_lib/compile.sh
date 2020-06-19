rm *.o &2> /dev/null
rm -rf ./bin ./obj &2> /dev/null
rm libtest.dylib &2> /dev/null

gcc -g -c test.c -o test.o                                                      # compiling a C library
gcc -dynamiclib -undefined suppress -flat_namespace test.o -o libtest.dylib     # generate a dynamic library from our object file
dotnet build                                                                    # compiling our C# application
