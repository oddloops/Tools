# gcov
- [gcov page](https://gcc.gnu.org/onlinedocs/gcc-7.2.0/gcc/Gcov.html#Gcov)
- [Invoking gcov, flags](https://gcc.gnu.org/onlinedocs/gcc-7.2.0/gcc/Invoking-Gcov.html#Invoking-Gcov)

## How to use
Inside makefile:
 - compile with -fprofile-arcs, -ftest-coverage, -lgcov
Example:
```
$(CC) -g -O0 -Wall **-fprofile-arcs -ftest-coverage** -L $(CUNIT_PATH_PREFIX)lib  -I $(CUNIT_PATH_PREFIX)include/$(CUNIT_DIRECTORY) $(OBJECTS) tests.c -o tests -lcunit **-lgcov**
```

To run:
```
make tests
./tests
gcov -abcfu (C file with functions that were tested)
look at .gcov file for gcov annotated source code with execution counts
```
