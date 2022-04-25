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

# calgrind
- [callgrind documentation](https://valgrind.org/docs/manual/cl-manual.html)

## How to use
```
valgrind --tool=callgrind ./$(VEX) 1000 1000
			     ^
			     |

			name of executable from valgrind
