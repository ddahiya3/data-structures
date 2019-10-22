


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==5074== Memcheck, a memory error detector
==5074== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5074== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5074== Command: ./test -r xml "test_find"
==5074== 
==5074== 
==5074== HEAP SUMMARY:
==5074==     in use at exit: 0 bytes in 0 blocks
==5074==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==5074== 
==5074== All heap blocks were freed -- no leaks are possible
==5074== 
==5074== For counts of detected and suppressed errors, rerun with: -v
==5074== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==5096== Memcheck, a memory error detector
==5096== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5096== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5096== Command: ./test -r xml "test_insert_big"
==5096== 
==5096== 
==5096== HEAP SUMMARY:
==5096==     in use at exit: 0 bytes in 0 blocks
==5096==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==5096== 
==5096== All heap blocks were freed -- no leaks are possible
==5096== 
==5096== For counts of detected and suppressed errors, rerun with: -v
==5096== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==5111== Memcheck, a memory error detector
==5111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5111== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5111== Command: ./test -r xml "test_remove_big"
==5111== 
==5111== 
==5111== HEAP SUMMARY:
==5111==     in use at exit: 0 bytes in 0 blocks
==5111==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==5111== 
==5111== All heap blocks were freed -- no leaks are possible
==5111== 
==5111== For counts of detected and suppressed errors, rerun with: -v
==5111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **83dc2c6122e96c92af0ac67ae0d35e0f615dfac4** (from **October 21st 2019, 12:15:00 am**)
