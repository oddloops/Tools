# CUnit
- [Installation](http://cunit.sourceforge.net/)
- [CUnit Documentation](http://cunit.sourceforge.net/doc/)

## How to use
Install CUnit on system to use

Need #includes:
```
#include "CUnit.h"
#include "Basic.h"
```

Inside makefile:
- Find location of CUnit
```
# OS identification from: https://stackoverflow.com/questions/714100/os-detecting-makefile
OS := $(shell uname -s)

ifeq ($(OS), Darwin) 
  CUNIT_PATH_PREFIX = /usr/local/Cellar/cunit/2.1-3/
  CUNIT_DIRECTORY = cunit
endif
ifeq ($(OS), Linux) 
  CUNIT_PATH_PREFIX = /util/CUnit/
  CUNIT_DIRECTORY = CUnit/
endif
```
- Add to recipe of test target
```
$(CUNIT_PATH_PREFIX)lib -I $(CUNIT_PATH_PREFIX)include/$(CUNIT_DIRECTORY) ... -lcunit
```

Run test
```
make tests
./tests
```

