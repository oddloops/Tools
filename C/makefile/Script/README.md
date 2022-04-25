# Script to create a basic makefile
From lex 18 & 19 of [UB CSE 306](https://cse.buffalo.edu/faculty/alphonce/SP22/CSE306/)
- [Bash manual](https://www.gnu.org/software/bash/manual/bash.html)

## Beginning of bash script file must be:
```
#!/bin/sh
```
## Permission 
```
chmod u+x "script file name
```

## Script Usage
```
Usage:
  makeMake compiler executable makefile
  makeMake compiler executable 
  makeMake compiler 
  makeMake 
```

Example:
```
./makeMake gcc main Makefile
```
