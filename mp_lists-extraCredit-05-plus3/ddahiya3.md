


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
==20164== Memcheck, a memory error detector
==20164== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20164== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20164== Command: ./test -r xml "List::insertFront\ size"
==20164== 
==20164== 
==20164== HEAP SUMMARY:
==20164==     in use at exit: 0 bytes in 0 blocks
==20164==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==20164== 
==20164== All heap blocks were freed -- no leaks are possible
==20164== 
==20164== For counts of detected and suppressed errors, rerun with: -v
==20164== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20166== Memcheck, a memory error detector
==20166== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20166== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20166== Command: ./test -r xml "List::insertBack\ size"
==20166== 
==20166== 
==20166== HEAP SUMMARY:
==20166==     in use at exit: 0 bytes in 0 blocks
==20166==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==20166== 
==20166== All heap blocks were freed -- no leaks are possible
==20166== 
==20166== For counts of detected and suppressed errors, rerun with: -v
==20166== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20168== Memcheck, a memory error detector
==20168== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20168== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20168== Command: ./test -r xml "List::insert\ contents"
==20168== 
==20168== 
==20168== HEAP SUMMARY:
==20168==     in use at exit: 0 bytes in 0 blocks
==20168==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==20168== 
==20168== All heap blocks were freed -- no leaks are possible
==20168== 
==20168== For counts of detected and suppressed errors, rerun with: -v
==20168== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20207== Memcheck, a memory error detector
==20207== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20207== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20207== Command: ./test -r xml "List::split\ simple"
==20207== 
==20207== 
==20207== HEAP SUMMARY:
==20207==     in use at exit: 0 bytes in 0 blocks
==20207==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==20207== 
==20207== All heap blocks were freed -- no leaks are possible
==20207== 
==20207== For counts of detected and suppressed errors, rerun with: -v
==20207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20211== Memcheck, a memory error detector
==20211== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20211== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20211== Command: ./test -r xml "List::_destroy\ empty\ list"
==20211== 
==20211== 
==20211== HEAP SUMMARY:
==20211==     in use at exit: 0 bytes in 0 blocks
==20211==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==20211== 
==20211== All heap blocks were freed -- no leaks are possible
==20211== 
==20211== For counts of detected and suppressed errors, rerun with: -v
==20211== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20225== Memcheck, a memory error detector
==20225== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20225== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20225== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==20225== 
==20225== 
==20225== HEAP SUMMARY:
==20225==     in use at exit: 0 bytes in 0 blocks
==20225==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==20225== 
==20225== All heap blocks were freed -- no leaks are possible
==20225== 
==20225== For counts of detected and suppressed errors, rerun with: -v
==20225== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20230== Memcheck, a memory error detector
==20230== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20230== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20230== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==20230== 
==20230== 
==20230== HEAP SUMMARY:
==20230==     in use at exit: 0 bytes in 0 blocks
==20230==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==20230== 
==20230== All heap blocks were freed -- no leaks are possible
==20230== 
==20230== For counts of detected and suppressed errors, rerun with: -v
==20230== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20234== Memcheck, a memory error detector
==20234== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20234== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20234== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==20234== 
==20234== 
==20234== HEAP SUMMARY:
==20234==     in use at exit: 0 bytes in 0 blocks
==20234==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==20234== 
==20234== All heap blocks were freed -- no leaks are possible
==20234== 
==20234== For counts of detected and suppressed errors, rerun with: -v
==20234== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20238== Memcheck, a memory error detector
==20238== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20238== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20238== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20238== 
==20238== 
==20238== HEAP SUMMARY:
==20238==     in use at exit: 0 bytes in 0 blocks
==20238==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==20238== 
==20238== All heap blocks were freed -- no leaks are possible
==20238== 
==20238== For counts of detected and suppressed errors, rerun with: -v
==20238== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20244== Memcheck, a memory error detector
==20244== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20244== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20244== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==20244== 
==20244== 
==20244== HEAP SUMMARY:
==20244==     in use at exit: 0 bytes in 0 blocks
==20244==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==20244== 
==20244== All heap blocks were freed -- no leaks are possible
==20244== 
==20244== For counts of detected and suppressed errors, rerun with: -v
==20244== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20246== Memcheck, a memory error detector
==20246== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20246== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20246== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==20246== 
==20246== 
==20246== HEAP SUMMARY:
==20246==     in use at exit: 0 bytes in 0 blocks
==20246==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==20246== 
==20246== All heap blocks were freed -- no leaks are possible
==20246== 
==20246== For counts of detected and suppressed errors, rerun with: -v
==20246== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20251== Memcheck, a memory error detector
==20251== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20251== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20251== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==20251== 
==20251== 
==20251== HEAP SUMMARY:
==20251==     in use at exit: 0 bytes in 0 blocks
==20251==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==20251== 
==20251== All heap blocks were freed -- no leaks are possible
==20251== 
==20251== For counts of detected and suppressed errors, rerun with: -v
==20251== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20255== Memcheck, a memory error detector
==20255== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20255== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20255== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==20255== 
==20255== 
==20255== HEAP SUMMARY:
==20255==     in use at exit: 0 bytes in 0 blocks
==20255==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==20255== 
==20255== All heap blocks were freed -- no leaks are possible
==20255== 
==20255== For counts of detected and suppressed errors, rerun with: -v
==20255== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20259== Memcheck, a memory error detector
==20259== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20259== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20259== Command: ./test -r xml "List::insert\ contents\ #2"
==20259== 
==20259== 
==20259== HEAP SUMMARY:
==20259==     in use at exit: 0 bytes in 0 blocks
==20259==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==20259== 
==20259== All heap blocks were freed -- no leaks are possible
==20259== 
==20259== For counts of detected and suppressed errors, rerun with: -v
==20259== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20263== Memcheck, a memory error detector
==20263== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20263== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20263== Command: ./test -r xml "List::split\ edge\ cases"
==20263== 
==20263== 
==20263== HEAP SUMMARY:
==20263==     in use at exit: 0 bytes in 0 blocks
==20263==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==20263== 
==20263== All heap blocks were freed -- no leaks are possible
==20263== 
==20263== For counts of detected and suppressed errors, rerun with: -v
==20263== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20267== Memcheck, a memory error detector
==20267== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==20267== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==20267== Command: ./test -r xml "List::waterfall\ simple"
==20267== 
==20267== 
==20267== HEAP SUMMARY:
==20267==     in use at exit: 0 bytes in 0 blocks
==20267==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==20267== 
==20267== All heap blocks were freed -- no leaks are possible
==20267== 
==20267== For counts of detected and suppressed errors, rerun with: -v
==20267== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ddahiya3** using **1beb8996cd3d3ced12bf9fcd4ba1a2bb15bba3cd** (from **October 5th 2019, 12:15:00 am**)
