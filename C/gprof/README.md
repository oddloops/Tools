# gprof
- [gprof manual](https://sourceware.org/binutils/docs/gprof/index.html#Top)
- [gprof tutorial](https://www.thegeekstuff.com/2012/08/gprof-tutorial)

## How to use
Compile with flag **-pg**

How to run:
1. compile with -pg flag
2. ./$(EXE)
3. gprof -b ./$(EXE) > analyze.txt
4. Look at analyze.txt for gprof timing data
* (GEX = gcov executable ex:"counts-grof")
