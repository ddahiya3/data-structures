


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==2142== Memcheck, a memory error detector
==2142== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2142== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2142== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==2142== 
==2142== 
==2142== HEAP SUMMARY:
==2142==     in use at exit: 0 bytes in 0 blocks
==2142==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==2142== 
==2142== All heap blocks were freed -- no leaks are possible
==2142== 
==2142== For counts of detected and suppressed errors, rerun with: -v
==2142== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==2145== Memcheck, a memory error detector
==2145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2145== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==2145== 
==2145== 
==2145== HEAP SUMMARY:
==2145==     in use at exit: 0 bytes in 0 blocks
==2145==   total heap usage: 2,019 allocs, 2,019 frees, 238,256 bytes allocated
==2145== 
==2145== All heap blocks were freed -- no leaks are possible
==2145== 
==2145== For counts of detected and suppressed errors, rerun with: -v
==2145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==2148== Memcheck, a memory error detector
==2148== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2148== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2148== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==2148== 
==2148== 
==2148== HEAP SUMMARY:
==2148==     in use at exit: 0 bytes in 0 blocks
==2148==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==2148== 
==2148== All heap blocks were freed -- no leaks are possible
==2148== 
==2148== For counts of detected and suppressed errors, rerun with: -v
==2148== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==2156== Memcheck, a memory error detector
==2156== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2156== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2156== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==2156== 
==2156== 
==2156== HEAP SUMMARY:
==2156==     in use at exit: 0 bytes in 0 blocks
==2156==   total heap usage: 2,019 allocs, 2,019 frees, 238,064 bytes allocated
==2156== 
==2156== All heap blocks were freed -- no leaks are possible
==2156== 
==2156== For counts of detected and suppressed errors, rerun with: -v
==2156== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==2160== Memcheck, a memory error detector
==2160== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2160== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2160== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==2160== 
==2160== 
==2160== HEAP SUMMARY:
==2160==     in use at exit: 0 bytes in 0 blocks
==2160==   total heap usage: 2,085 allocs, 2,085 frees, 243,672 bytes allocated
==2160== 
==2160== All heap blocks were freed -- no leaks are possible
==2160== 
==2160== For counts of detected and suppressed errors, rerun with: -v
==2160== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==2163== Memcheck, a memory error detector
==2163== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2163== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2163== Command: ./test -r xml "Testing\ simple\ backflow"
==2163== 
==2163== 
==2163== HEAP SUMMARY:
==2163==     in use at exit: 0 bytes in 0 blocks
==2163==   total heap usage: 2,065 allocs, 2,065 frees, 239,664 bytes allocated
==2163== 
==2163== All heap blocks were freed -- no leaks are possible
==2163== 
==2163== For counts of detected and suppressed errors, rerun with: -v
==2163== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==2166== Memcheck, a memory error detector
==2166== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2166== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2166== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==2166== 
==2166== 
==2166== HEAP SUMMARY:
==2166==     in use at exit: 0 bytes in 0 blocks
==2166==   total heap usage: 2,098 allocs, 2,098 frees, 244,752 bytes allocated
==2166== 
==2166== All heap blocks were freed -- no leaks are possible
==2166== 
==2166== For counts of detected and suppressed errors, rerun with: -v
==2166== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==2169== Memcheck, a memory error detector
==2169== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2169== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2169== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==2169== 
==2169== 
==2169== HEAP SUMMARY:
==2169==     in use at exit: 0 bytes in 0 blocks
==2169==   total heap usage: 2,112 allocs, 2,112 frees, 243,072 bytes allocated
==2169== 
==2169== All heap blocks were freed -- no leaks are possible
==2169== 
==2169== For counts of detected and suppressed errors, rerun with: -v
==2169== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==2173== Memcheck, a memory error detector
==2173== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2173== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2173== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==2173== 
==2173== 
==2173== HEAP SUMMARY:
==2173==     in use at exit: 0 bytes in 0 blocks
==2173==   total heap usage: 2,181 allocs, 2,181 frees, 252,240 bytes allocated
==2173== 
==2173== All heap blocks were freed -- no leaks are possible
==2173== 
==2173== For counts of detected and suppressed errors, rerun with: -v
==2173== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==2176== Memcheck, a memory error detector
==2176== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2176== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==2176== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==2176== 
==2176== 
==2176== HEAP SUMMARY:
==2176==     in use at exit: 0 bytes in 0 blocks
==2176==   total heap usage: 2,184 allocs, 2,184 frees, 250,424 bytes allocated
==2176== 
==2176== All heap blocks were freed -- no leaks are possible
==2176== 
==2176== For counts of detected and suppressed errors, rerun with: -v
==2176== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **12f201e5d801f267800b2d0f0880a681588e9b5b** (from **December 9th 2019, 12:15:00 am**)
