# How to run each tool

Compile for debugger info: -g -Wall -std=c11 //
Flags gcov, gprof usage: -pg -fprofile-arcs -ftest-coverage

## gcov
```
make clean
make $(EXE)
./$(EXE)
gcov (source file with functions).c (Excample:lsb.c)
Run gcov with flags abcfu, gcov -abcfu $(SRC).c
"Look at $(SRC).gcov for gcov output"
```

## gprof
```
make clean
make $(EXE)
./$(EXE)
gprof -b ./$(EXE) gmon.out > analyze.txt 
Look at analyze.txt for gprof timing data
```

## valgrind
```
valgrind --tool=memcheck --leak-check=yes ./main
```

## callgrind
```
make clean
make main
valgrind --tool=callgrind ./main 1000 1000
```
