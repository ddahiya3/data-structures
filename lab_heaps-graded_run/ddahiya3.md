


## Score: 20/20 (100.00%)


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


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==9181== Memcheck, a memory error detector
==9181== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9181== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9181== Command: ./test -r xml "test_heapify_down_1"
==9181== 
==9181== 
==9181== HEAP SUMMARY:
==9181==     in use at exit: 0 bytes in 0 blocks
==9181==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==9181== 
==9181== All heap blocks were freed -- no leaks are possible
==9181== 
==9181== For counts of detected and suppressed errors, rerun with: -v
==9181== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==9196== Memcheck, a memory error detector
==9196== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9196== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9196== Command: ./test -r xml "test_heapify_down_2"
==9196== 
==9196== 
==9196== HEAP SUMMARY:
==9196==     in use at exit: 0 bytes in 0 blocks
==9196==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==9196== 
==9196== All heap blocks were freed -- no leaks are possible
==9196== 
==9196== For counts of detected and suppressed errors, rerun with: -v
==9196== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==9211== Memcheck, a memory error detector
==9211== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9211== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9211== Command: ./test -r xml "test_heapify_down_3"
==9211== 
==9211== 
==9211== HEAP SUMMARY:
==9211==     in use at exit: 0 bytes in 0 blocks
==9211==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==9211== 
==9211== All heap blocks were freed -- no leaks are possible
==9211== 
==9211== For counts of detected and suppressed errors, rerun with: -v
==9211== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==9250== Memcheck, a memory error detector
==9250== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9250== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9250== Command: ./test -r xml "test_heapify_down_4"
==9250== 
==9250== 
==9250== HEAP SUMMARY:
==9250==     in use at exit: 0 bytes in 0 blocks
==9250==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==9250== 
==9250== All heap blocks were freed -- no leaks are possible
==9250== 
==9250== For counts of detected and suppressed errors, rerun with: -v
==9250== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==9284== Memcheck, a memory error detector
==9284== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9284== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9284== Command: ./test -r xml "test_heapify_down_5"
==9284== 
==9284== 
==9284== HEAP SUMMARY:
==9284==     in use at exit: 0 bytes in 0 blocks
==9284==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==9284== 
==9284== All heap blocks were freed -- no leaks are possible
==9284== 
==9284== For counts of detected and suppressed errors, rerun with: -v
==9284== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==9349== Memcheck, a memory error detector
==9349== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9349== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9349== Command: ./test -r xml "test_heapify_down_6"
==9349== 
==9349== 
==9349== HEAP SUMMARY:
==9349==     in use at exit: 0 bytes in 0 blocks
==9349==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==9349== 
==9349== All heap blocks were freed -- no leaks are possible
==9349== 
==9349== For counts of detected and suppressed errors, rerun with: -v
==9349== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==9357== Memcheck, a memory error detector
==9357== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9357== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9357== Command: ./test -r xml "test_heapify_down_7"
==9357== 
==9357== 
==9357== HEAP SUMMARY:
==9357==     in use at exit: 0 bytes in 0 blocks
==9357==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==9357== 
==9357== All heap blocks were freed -- no leaks are possible
==9357== 
==9357== For counts of detected and suppressed errors, rerun with: -v
==9357== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==9364== Memcheck, a memory error detector
==9364== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9364== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9364== Command: ./test -r xml "test_heapify_down_8"
==9364== 
==9364== 
==9364== HEAP SUMMARY:
==9364==     in use at exit: 0 bytes in 0 blocks
==9364==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==9364== 
==9364== All heap blocks were freed -- no leaks are possible
==9364== 
==9364== For counts of detected and suppressed errors, rerun with: -v
==9364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==9377== Memcheck, a memory error detector
==9377== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9377== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9377== Command: ./test -r xml "test_heapify_down_9"
==9377== 
==9377== 
==9377== HEAP SUMMARY:
==9377==     in use at exit: 0 bytes in 0 blocks
==9377==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==9377== 
==9377== All heap blocks were freed -- no leaks are possible
==9377== 
==9377== For counts of detected and suppressed errors, rerun with: -v
==9377== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==9412== Memcheck, a memory error detector
==9412== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9412== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9412== Command: ./test -r xml "test_heapify_down_10"
==9412== 
==9412== 
==9412== HEAP SUMMARY:
==9412==     in use at exit: 0 bytes in 0 blocks
==9412==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==9412== 
==9412== All heap blocks were freed -- no leaks are possible
==9412== 
==9412== For counts of detected and suppressed errors, rerun with: -v
==9412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==9419== Memcheck, a memory error detector
==9419== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9419== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9419== Command: ./test -r xml "test_build_heap_1"
==9419== 
==9419== 
==9419== HEAP SUMMARY:
==9419==     in use at exit: 0 bytes in 0 blocks
==9419==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==9419== 
==9419== All heap blocks were freed -- no leaks are possible
==9419== 
==9419== For counts of detected and suppressed errors, rerun with: -v
==9419== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==9425== Memcheck, a memory error detector
==9425== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9425== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9425== Command: ./test -r xml "test_build_heap_2"
==9425== 
==9425== 
==9425== HEAP SUMMARY:
==9425==     in use at exit: 0 bytes in 0 blocks
==9425==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==9425== 
==9425== All heap blocks were freed -- no leaks are possible
==9425== 
==9425== For counts of detected and suppressed errors, rerun with: -v
==9425== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==9438== Memcheck, a memory error detector
==9438== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9438== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9438== Command: ./test -r xml "test_build_heap_3"
==9438== 
==9438== 
==9438== HEAP SUMMARY:
==9438==     in use at exit: 0 bytes in 0 blocks
==9438==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==9438== 
==9438== All heap blocks were freed -- no leaks are possible
==9438== 
==9438== For counts of detected and suppressed errors, rerun with: -v
==9438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==9441== Memcheck, a memory error detector
==9441== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9441== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9441== Command: ./test -r xml "test_build_heap_4"
==9441== 
==9441== 
==9441== HEAP SUMMARY:
==9441==     in use at exit: 0 bytes in 0 blocks
==9441==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==9441== 
==9441== All heap blocks were freed -- no leaks are possible
==9441== 
==9441== For counts of detected and suppressed errors, rerun with: -v
==9441== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==9455== Memcheck, a memory error detector
==9455== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9455== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9455== Command: ./test -r xml "test_build_heap_5"
==9455== 
==9455== 
==9455== HEAP SUMMARY:
==9455==     in use at exit: 0 bytes in 0 blocks
==9455==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==9455== 
==9455== All heap blocks were freed -- no leaks are possible
==9455== 
==9455== For counts of detected and suppressed errors, rerun with: -v
==9455== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==9463== Memcheck, a memory error detector
==9463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9463== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9463== Command: ./test -r xml "test_update_elem_1"
==9463== 
==9463== 
==9463== HEAP SUMMARY:
==9463==     in use at exit: 0 bytes in 0 blocks
==9463==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==9463== 
==9463== All heap blocks were freed -- no leaks are possible
==9463== 
==9463== For counts of detected and suppressed errors, rerun with: -v
==9463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==9471== Memcheck, a memory error detector
==9471== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9471== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9471== Command: ./test -r xml "test_update_elem_2"
==9471== 
==9471== 
==9471== HEAP SUMMARY:
==9471==     in use at exit: 0 bytes in 0 blocks
==9471==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==9471== 
==9471== All heap blocks were freed -- no leaks are possible
==9471== 
==9471== For counts of detected and suppressed errors, rerun with: -v
==9471== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==9474== Memcheck, a memory error detector
==9474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9474== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9474== Command: ./test -r xml "test_update_elem_3"
==9474== 
==9474== 
==9474== HEAP SUMMARY:
==9474==     in use at exit: 0 bytes in 0 blocks
==9474==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==9474== 
==9474== All heap blocks were freed -- no leaks are possible
==9474== 
==9474== For counts of detected and suppressed errors, rerun with: -v
==9474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==9478== Memcheck, a memory error detector
==9478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9478== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9478== Command: ./test -r xml "test_update_elem_4"
==9478== 
==9478== 
==9478== HEAP SUMMARY:
==9478==     in use at exit: 0 bytes in 0 blocks
==9478==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==9478== 
==9478== All heap blocks were freed -- no leaks are possible
==9478== 
==9478== For counts of detected and suppressed errors, rerun with: -v
==9478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==9489== Memcheck, a memory error detector
==9489== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9489== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==9489== Command: ./test -r xml "test_update_elem_5"
==9489== 
==9489== 
==9489== HEAP SUMMARY:
==9489==     in use at exit: 0 bytes in 0 blocks
==9489==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==9489== 
==9489== All heap blocks were freed -- no leaks are possible
==9489== 
==9489== For counts of detected and suppressed errors, rerun with: -v
==9489== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **5aece0657df5fefebdebb0cd86425bc54675afe8** (from **November 11th 2019, 12:15:00 am**)
