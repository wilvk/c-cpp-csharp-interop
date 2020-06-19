#!/bin/bash

cd c_c_lib
cat README.md
echo
./compile.sh
./main
cd ..

cd c_cpp_lib
echo
cat README.md
./compile.sh
./main
cd ..

cd cpp_c_lib
echo
cat README.md
./compile.sh
./main
cd ..

cd cpp_cpp_lib
echo
cat README.md
./compile.sh
./main
cd ..

cd cs_c_lib
echo
cat README.md
./compile.sh
dotnet run
cd ..

cd cs_cpp_lib
echo
cat README.md
./compile.sh
dotnet run
cd ..
