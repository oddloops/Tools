# Makefile
- [makefile manual](https://www.gnu.org/software/make/manual/make.pdf)

## Components
```
target : prerequisites
	recipe
   ^
   |
Must be tab
```
### Target
Targets are usually the name of a file that needs to be generated/updated. 
Can be *"phony"* - arbitrary label for an action given by result of a rule
```
.PHONY: clean
clean:
	rm -rf *~ *.o (executables) *.dSYM (Other files to clean)
```
### Variables
Name defined to represent some data. Write '$(var_name)' or '${var_name}' to access value in variable.
```
cc = gcc
NO_DEBUG_FLAGS = -c -Wall -std=c11
DEBUG_FLAGS = -g -c -Wall -std=c11
FLAGS = $(DEBUG_FLAGS)
```

## Running a make file
```
make "target"
```

Example::
```
make clean
make main
```
