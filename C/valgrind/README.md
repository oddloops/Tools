# valgrind
- [valgrind documentation](https://valgrind.org/docs/manual/)

## How to use
Compile with flags: 
```
--tool=memcheck --leak-check=yes
```
Run valgrind on compiled executable:
```
valgrind --tool=memcheck --leak-check=yes ./$(EXE)
```
Clean:
rm -rf vgcire.*
