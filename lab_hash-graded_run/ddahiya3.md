


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==5581== Memcheck, a memory error detector
==5581== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5581== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5581== Command: ./test -r xml "DH::testRemoveEASY"
==5581== 
==5581== 
==5581== HEAP SUMMARY:
==5581==     in use at exit: 0 bytes in 0 blocks
==5581==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==5581== 
==5581== All heap blocks were freed -- no leaks are possible
==5581== 
==5581== For counts of detected and suppressed errors, rerun with: -v
==5581== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==5583== Memcheck, a memory error detector
==5583== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5583== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5583== Command: ./test -r xml "DH::testRemoveHard"
==5583== 
==5583== 
==5583== HEAP SUMMARY:
==5583==     in use at exit: 0 bytes in 0 blocks
==5583==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==5583== 
==5583== All heap blocks were freed -- no leaks are possible
==5583== 
==5583== For counts of detected and suppressed errors, rerun with: -v
==5583== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==5586== Memcheck, a memory error detector
==5586== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5586== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5586== Command: ./test -r xml "DH::testResizeOnce"
==5586== 
==5586== 
==5586== HEAP SUMMARY:
==5586==     in use at exit: 0 bytes in 0 blocks
==5586==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==5586== 
==5586== All heap blocks were freed -- no leaks are possible
==5586== 
==5586== For counts of detected and suppressed errors, rerun with: -v
==5586== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==5594== Memcheck, a memory error detector
==5594== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5594== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5594== Command: ./test -r xml "DH::testResizeAll"
==5594== 
==5594== 
==5594== HEAP SUMMARY:
==5594==     in use at exit: 0 bytes in 0 blocks
==5594==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==5594== 
==5594== All heap blocks were freed -- no leaks are possible
==5594== 
==5594== For counts of detected and suppressed errors, rerun with: -v
==5594== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==5600== Memcheck, a memory error detector
==5600== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5600== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5600== Command: ./test -r xml "DH::testInsertEasy"
==5600== 
==5600== 
==5600== HEAP SUMMARY:
==5600==     in use at exit: 0 bytes in 0 blocks
==5600==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==5600== 
==5600== All heap blocks were freed -- no leaks are possible
==5600== 
==5600== For counts of detected and suppressed errors, rerun with: -v
==5600== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==5602== Memcheck, a memory error detector
==5602== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5602== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5602== Command: ./test -r xml "DH::testInsertHard"
==5602== 
==5602== 
==5602== HEAP SUMMARY:
==5602==     in use at exit: 0 bytes in 0 blocks
==5602==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==5602== 
==5602== All heap blocks were freed -- no leaks are possible
==5602== 
==5602== For counts of detected and suppressed errors, rerun with: -v
==5602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==5605== Memcheck, a memory error detector
==5605== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5605== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5605== Command: ./test -r xml "SC::testRemoveEASY"
==5605== 
==5605== 
==5605== HEAP SUMMARY:
==5605==     in use at exit: 0 bytes in 0 blocks
==5605==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==5605== 
==5605== All heap blocks were freed -- no leaks are possible
==5605== 
==5605== For counts of detected and suppressed errors, rerun with: -v
==5605== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==5607== Memcheck, a memory error detector
==5607== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5607== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5607== Command: ./test -r xml "SC::testRemoveHard"
==5607== 
==5607== 
==5607== HEAP SUMMARY:
==5607==     in use at exit: 0 bytes in 0 blocks
==5607==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==5607== 
==5607== All heap blocks were freed -- no leaks are possible
==5607== 
==5607== For counts of detected and suppressed errors, rerun with: -v
==5607== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==5609== Memcheck, a memory error detector
==5609== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5609== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5609== Command: ./test -r xml "SC::testResizeOnce"
==5609== 
==5609== 
==5609== HEAP SUMMARY:
==5609==     in use at exit: 0 bytes in 0 blocks
==5609==   total heap usage: 2,007 allocs, 2,007 frees, 249,664 bytes allocated
==5609== 
==5609== All heap blocks were freed -- no leaks are possible
==5609== 
==5609== For counts of detected and suppressed errors, rerun with: -v
==5609== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==5611== Memcheck, a memory error detector
==5611== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5611== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5611== Command: ./test -r xml "SC::testResizeAll"
==5611== 
==5611== 
==5611== HEAP SUMMARY:
==5611==     in use at exit: 0 bytes in 0 blocks
==5611==   total heap usage: 1,906 allocs, 1,906 frees, 242,848 bytes allocated
==5611== 
==5611== All heap blocks were freed -- no leaks are possible
==5611== 
==5611== For counts of detected and suppressed errors, rerun with: -v
==5611== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==5613== Memcheck, a memory error detector
==5613== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5613== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5613== Command: ./test -r xml "SC::testInsertEasy"
==5613== 
==5613== 
==5613== HEAP SUMMARY:
==5613==     in use at exit: 0 bytes in 0 blocks
==5613==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==5613== 
==5613== All heap blocks were freed -- no leaks are possible
==5613== 
==5613== For counts of detected and suppressed errors, rerun with: -v
==5613== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==5615== Memcheck, a memory error detector
==5615== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5615== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5615== Command: ./test -r xml "SC::testInsertHard"
==5615== 
==5615== 
==5615== HEAP SUMMARY:
==5615==     in use at exit: 0 bytes in 0 blocks
==5615==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==5615== 
==5615== All heap blocks were freed -- no leaks are possible
==5615== 
==5615== For counts of detected and suppressed errors, rerun with: -v
==5615== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==5617== Memcheck, a memory error detector
==5617== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5617== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5617== Command: ./test -r xml "LP::testRemoveEASY"
==5617== 
==5617== 
==5617== HEAP SUMMARY:
==5617==     in use at exit: 0 bytes in 0 blocks
==5617==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==5617== 
==5617== All heap blocks were freed -- no leaks are possible
==5617== 
==5617== For counts of detected and suppressed errors, rerun with: -v
==5617== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==5619== Memcheck, a memory error detector
==5619== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5619== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5619== Command: ./test -r xml "LP::testRemoveHard"
==5619== 
==5619== 
==5619== HEAP SUMMARY:
==5619==     in use at exit: 0 bytes in 0 blocks
==5619==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==5619== 
==5619== All heap blocks were freed -- no leaks are possible
==5619== 
==5619== For counts of detected and suppressed errors, rerun with: -v
==5619== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==5621== Memcheck, a memory error detector
==5621== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5621== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5621== Command: ./test -r xml "LP::testResizeOnce"
==5621== 
==5621== 
==5621== HEAP SUMMARY:
==5621==     in use at exit: 0 bytes in 0 blocks
==5621==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==5621== 
==5621== All heap blocks were freed -- no leaks are possible
==5621== 
==5621== For counts of detected and suppressed errors, rerun with: -v
==5621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==5623== Memcheck, a memory error detector
==5623== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5623== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5623== Command: ./test -r xml "LP::testResizeAll"
==5623== 
==5623== 
==5623== HEAP SUMMARY:
==5623==     in use at exit: 0 bytes in 0 blocks
==5623==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==5623== 
==5623== All heap blocks were freed -- no leaks are possible
==5623== 
==5623== For counts of detected and suppressed errors, rerun with: -v
==5623== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==5625== Memcheck, a memory error detector
==5625== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5625== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5625== Command: ./test -r xml "LP::testInsertEasy"
==5625== 
==5625== 
==5625== HEAP SUMMARY:
==5625==     in use at exit: 0 bytes in 0 blocks
==5625==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==5625== 
==5625== All heap blocks were freed -- no leaks are possible
==5625== 
==5625== For counts of detected and suppressed errors, rerun with: -v
==5625== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==5627== Memcheck, a memory error detector
==5627== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5627== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5627== Command: ./test -r xml "LP::testInsertHard"
==5627== 
==5627== 
==5627== HEAP SUMMARY:
==5627==     in use at exit: 0 bytes in 0 blocks
==5627==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==5627== 
==5627== All heap blocks were freed -- no leaks are possible
==5627== 
==5627== For counts of detected and suppressed errors, rerun with: -v
==5627== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **56c40f3f039b5c920d0e8f38fc67962b2436ad52** (from **November 4th 2019, 12:15:00 am**)
