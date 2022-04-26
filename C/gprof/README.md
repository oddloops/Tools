# gprof
- [gprof manual](https://sourceware.org/binutils/docs/gprof/index.html#Top)
- [gprof tutorial](https://www.thegeekstuff.com/2012/08/gprof-tutorial)

## How to use
Compile with flage **-pg**

How to run:
1. compile with -pg flag
2. ./$(GEX) , (GEX = gprof executable ex with functions :"-grof")
3. gprof -b ./$(GEX) > analyze.txt
4. Look at analyze.txt for gprof timing data
