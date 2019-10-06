


## Score: 57/57 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==4431== Memcheck, a memory error detector
==4431== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4431== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4431== Command: ./test -r xml "List::insertFront\ size"
==4431== 
==4431== 
==4431== HEAP SUMMARY:
==4431==     in use at exit: 0 bytes in 0 blocks
==4431==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==4431== 
==4431== All heap blocks were freed -- no leaks are possible
==4431== 
==4431== For counts of detected and suppressed errors, rerun with: -v
==4431== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==4433== Memcheck, a memory error detector
==4433== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4433== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4433== Command: ./test -r xml "List::insertBack\ size"
==4433== 
==4433== 
==4433== HEAP SUMMARY:
==4433==     in use at exit: 0 bytes in 0 blocks
==4433==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==4433== 
==4433== All heap blocks were freed -- no leaks are possible
==4433== 
==4433== For counts of detected and suppressed errors, rerun with: -v
==4433== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==4435== Memcheck, a memory error detector
==4435== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4435== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4435== Command: ./test -r xml "List::insert\ contents"
==4435== 
==4435== 
==4435== HEAP SUMMARY:
==4435==     in use at exit: 0 bytes in 0 blocks
==4435==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==4435== 
==4435== All heap blocks were freed -- no leaks are possible
==4435== 
==4435== For counts of detected and suppressed errors, rerun with: -v
==4435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==4438== Memcheck, a memory error detector
==4438== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4438== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4438== Command: ./test -r xml "List::split\ simple"
==4438== 
==4438== 
==4438== HEAP SUMMARY:
==4438==     in use at exit: 0 bytes in 0 blocks
==4438==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==4438== 
==4438== All heap blocks were freed -- no leaks are possible
==4438== 
==4438== For counts of detected and suppressed errors, rerun with: -v
==4438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==4476== Memcheck, a memory error detector
==4476== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4476== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4476== Command: ./test -r xml "List::_destroy\ empty\ list"
==4476== 
==4476== 
==4476== HEAP SUMMARY:
==4476==     in use at exit: 0 bytes in 0 blocks
==4476==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==4476== 
==4476== All heap blocks were freed -- no leaks are possible
==4476== 
==4476== For counts of detected and suppressed errors, rerun with: -v
==4476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==4479== Memcheck, a memory error detector
==4479== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4479== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4479== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==4479== 
==4479== 
==4479== HEAP SUMMARY:
==4479==     in use at exit: 0 bytes in 0 blocks
==4479==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==4479== 
==4479== All heap blocks were freed -- no leaks are possible
==4479== 
==4479== For counts of detected and suppressed errors, rerun with: -v
==4479== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==4482== Memcheck, a memory error detector
==4482== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4482== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4482== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==4482== 
==4482== 
==4482== HEAP SUMMARY:
==4482==     in use at exit: 0 bytes in 0 blocks
==4482==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==4482== 
==4482== All heap blocks were freed -- no leaks are possible
==4482== 
==4482== For counts of detected and suppressed errors, rerun with: -v
==4482== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==4486== Memcheck, a memory error detector
==4486== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4486== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4486== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==4486== 
==4486== 
==4486== HEAP SUMMARY:
==4486==     in use at exit: 0 bytes in 0 blocks
==4486==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==4486== 
==4486== All heap blocks were freed -- no leaks are possible
==4486== 
==4486== For counts of detected and suppressed errors, rerun with: -v
==4486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==4488== Memcheck, a memory error detector
==4488== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4488== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4488== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==4488== 
==4488== 
==4488== HEAP SUMMARY:
==4488==     in use at exit: 0 bytes in 0 blocks
==4488==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==4488== 
==4488== All heap blocks were freed -- no leaks are possible
==4488== 
==4488== For counts of detected and suppressed errors, rerun with: -v
==4488== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==4490== Memcheck, a memory error detector
==4490== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4490== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4490== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==4490== 
==4490== 
==4490== HEAP SUMMARY:
==4490==     in use at exit: 0 bytes in 0 blocks
==4490==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==4490== 
==4490== All heap blocks were freed -- no leaks are possible
==4490== 
==4490== For counts of detected and suppressed errors, rerun with: -v
==4490== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==4492== Memcheck, a memory error detector
==4492== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4492== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4492== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==4492== 
==4492== 
==4492== HEAP SUMMARY:
==4492==     in use at exit: 0 bytes in 0 blocks
==4492==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==4492== 
==4492== All heap blocks were freed -- no leaks are possible
==4492== 
==4492== For counts of detected and suppressed errors, rerun with: -v
==4492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==4494== Memcheck, a memory error detector
==4494== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4494== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4494== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==4494== 
==4494== 
==4494== HEAP SUMMARY:
==4494==     in use at exit: 0 bytes in 0 blocks
==4494==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==4494== 
==4494== All heap blocks were freed -- no leaks are possible
==4494== 
==4494== For counts of detected and suppressed errors, rerun with: -v
==4494== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==4498== Memcheck, a memory error detector
==4498== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4498== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4498== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==4498== 
==4498== 
==4498== HEAP SUMMARY:
==4498==     in use at exit: 0 bytes in 0 blocks
==4498==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==4498== 
==4498== All heap blocks were freed -- no leaks are possible
==4498== 
==4498== For counts of detected and suppressed errors, rerun with: -v
==4498== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==4502== Memcheck, a memory error detector
==4502== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4502== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4502== Command: ./test -r xml "List::insert\ contents\ #2"
==4502== 
==4502== 
==4502== HEAP SUMMARY:
==4502==     in use at exit: 0 bytes in 0 blocks
==4502==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==4502== 
==4502== All heap blocks were freed -- no leaks are possible
==4502== 
==4502== For counts of detected and suppressed errors, rerun with: -v
==4502== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==4506== Memcheck, a memory error detector
==4506== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4506== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4506== Command: ./test -r xml "List::split\ edge\ cases"
==4506== 
==4506== 
==4506== HEAP SUMMARY:
==4506==     in use at exit: 0 bytes in 0 blocks
==4506==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==4506== 
==4506== All heap blocks were freed -- no leaks are possible
==4506== 
==4506== For counts of detected and suppressed errors, rerun with: -v
==4506== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==4508== Memcheck, a memory error detector
==4508== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4508== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4508== Command: ./test -r xml "List::waterfall\ simple"
==4508== 
==4508== 
==4508== HEAP SUMMARY:
==4508==     in use at exit: 0 bytes in 0 blocks
==4508==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==4508== 
==4508== All heap blocks were freed -- no leaks are possible
==4508== 
==4508== For counts of detected and suppressed errors, rerun with: -v
==4508== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **1beb8996cd3d3ced12bf9fcd4ba1a2bb15bba3cd** (from **October 6th 2019, 12:15:00 am**)
