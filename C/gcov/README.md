# gcov
- [gcov page](https://gcc.gnu.org/onlinedocs/gcc-7.2.0/gcc/Gcov.html#Gcov)
- [Invoking gcov, flags](https://gcc.gnu.org/onlinedocs/gcc-7.2.0/gcc/Invoking-Gcov.html#Invoking-Gcov)

## How to use
Inside makefile:
 - compile with **-fprofile-arcs**, **-ftest-coverage**, and **-lgcov** at the back
**Example**:
```
gcc -fprofile-arcs -ftest-coverage ... -lgcov
```
To run:
1. make tests
2. ./tests
3. gcov -abcfu (C file with functions that were tested)
4. look at .gcov file for gcov annotated source code with execution counts
