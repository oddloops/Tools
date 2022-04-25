# gprof
- [gprof manual](https://sourceware.org/binutils/docs/gprof/index.html#Top)
- [gprof tutorial](https://www.thegeekstuff.com/2012/08/gprof-tutorial)

## How to use
Compile with flage **-pg**

How to run:
```
compile with -pg flag
./$(GEX) GEX = gcov executable ex:"counts-grof"
gprof -b ./$(GEX) > analyze.txt
Look at analyze.txt for gprof timing data
```
