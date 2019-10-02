


## Score: 32/57 (56.14%)


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
==30451== Memcheck, a memory error detector
==30451== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30451== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30451== Command: ./test -r xml "List::insertFront\ size"
==30451== 
==30451== 
==30451== HEAP SUMMARY:
==30451==     in use at exit: 0 bytes in 0 blocks
==30451==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==30451== 
==30451== All heap blocks were freed -- no leaks are possible
==30451== 
==30451== For counts of detected and suppressed errors, rerun with: -v
==30451== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30488== Memcheck, a memory error detector
==30488== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30488== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30488== Command: ./test -r xml "List::insertBack\ size"
==30488== 
==30488== 
==30488== HEAP SUMMARY:
==30488==     in use at exit: 0 bytes in 0 blocks
==30488==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==30488== 
==30488== All heap blocks were freed -- no leaks are possible
==30488== 
==30488== For counts of detected and suppressed errors, rerun with: -v
==30488== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30492== Memcheck, a memory error detector
==30492== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30492== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30492== Command: ./test -r xml "List::insert\ contents"
==30492== 
==30492== 
==30492== HEAP SUMMARY:
==30492==     in use at exit: 0 bytes in 0 blocks
==30492==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==30492== 
==30492== All heap blocks were freed -- no leaks are possible
==30492== 
==30492== For counts of detected and suppressed errors, rerun with: -v
==30492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/15] - List::waterfall

- **Points**: 0 / 15


```
Original: expected == out
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==30502== Memcheck, a memory error detector
==30502== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30502== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30502== Command: ./test -r xml "List::split\ simple"
==30502== 
==30502== 
==30502== HEAP SUMMARY:
==30502==     in use at exit: 0 bytes in 0 blocks
==30502==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==30502== 
==30502== All heap blocks were freed -- no leaks are possible
==30502== 
==30502== For counts of detected and suppressed errors, rerun with: -v
==30502== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30516== Memcheck, a memory error detector
==30516== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30516== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30516== Command: ./test -r xml "List::_destroy\ empty\ list"
==30516== 
==30516== 
==30516== HEAP SUMMARY:
==30516==     in use at exit: 0 bytes in 0 blocks
==30516==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==30516== 
==30516== All heap blocks were freed -- no leaks are possible
==30516== 
==30516== For counts of detected and suppressed errors, rerun with: -v
==30516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30547== Memcheck, a memory error detector
==30547== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30547== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30547== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==30547== 
==30547== 
==30547== HEAP SUMMARY:
==30547==     in use at exit: 0 bytes in 0 blocks
==30547==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==30547== 
==30547== All heap blocks were freed -- no leaks are possible
==30547== 
==30547== For counts of detected and suppressed errors, rerun with: -v
==30547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30549== Memcheck, a memory error detector
==30549== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30549== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30549== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==30549== 
==30549== 
==30549== HEAP SUMMARY:
==30549==     in use at exit: 0 bytes in 0 blocks
==30549==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==30549== 
==30549== All heap blocks were freed -- no leaks are possible
==30549== 
==30549== For counts of detected and suppressed errors, rerun with: -v
==30549== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30577== Memcheck, a memory error detector
==30577== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30577== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30577== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==30577== 
==30577== 
==30577== HEAP SUMMARY:
==30577==     in use at exit: 0 bytes in 0 blocks
==30577==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==30577== 
==30577== All heap blocks were freed -- no leaks are possible
==30577== 
==30577== For counts of detected and suppressed errors, rerun with: -v
==30577== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30583== Memcheck, a memory error detector
==30583== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30583== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30583== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30583== 
==30583== 
==30583== HEAP SUMMARY:
==30583==     in use at exit: 0 bytes in 0 blocks
==30583==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==30583== 
==30583== All heap blocks were freed -- no leaks are possible
==30583== 
==30583== For counts of detected and suppressed errors, rerun with: -v
==30583== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30587== Memcheck, a memory error detector
==30587== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30587== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30587== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==30587== 
==30587== 
==30587== HEAP SUMMARY:
==30587==     in use at exit: 0 bytes in 0 blocks
==30587==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==30587== 
==30587== All heap blocks were freed -- no leaks are possible
==30587== 
==30587== For counts of detected and suppressed errors, rerun with: -v
==30587== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30591== Memcheck, a memory error detector
==30591== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30591== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30591== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==30591== 
==30591== 
==30591== HEAP SUMMARY:
==30591==     in use at exit: 0 bytes in 0 blocks
==30591==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==30591== 
==30591== All heap blocks were freed -- no leaks are possible
==30591== 
==30591== For counts of detected and suppressed errors, rerun with: -v
==30591== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30597== Memcheck, a memory error detector
==30597== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30597== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30597== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==30597== 
==30597== 
==30597== HEAP SUMMARY:
==30597==     in use at exit: 0 bytes in 0 blocks
==30597==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==30597== 
==30597== All heap blocks were freed -- no leaks are possible
==30597== 
==30597== For counts of detected and suppressed errors, rerun with: -v
==30597== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30599== Memcheck, a memory error detector
==30599== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30599== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30599== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==30599== 
==30599== 
==30599== HEAP SUMMARY:
==30599==     in use at exit: 0 bytes in 0 blocks
==30599==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==30599== 
==30599== All heap blocks were freed -- no leaks are possible
==30599== 
==30599== For counts of detected and suppressed errors, rerun with: -v
==30599== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==30601== Memcheck, a memory error detector
==30601== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==30601== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==30601== Command: ./test -r xml "List::insert\ contents\ #2"
==30601== 
==30601== 
==30601== HEAP SUMMARY:
==30601==     in use at exit: 0 bytes in 0 blocks
==30601==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==30601== 
==30601== All heap blocks were freed -- no leaks are possible
==30601== 
==30601== For counts of detected and suppressed errors, rerun with: -v
==30601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::waterfall simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="62">
        <Original>
          "&lt; 1 3 5 7 2 6 4 8 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 3 5 7 2 6 4 8 >"
==
"&lt; 1 2 3 4 5 6 7 8 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **5042b7ca6969ad90f736bafcc6746282b69bbdf0** (from **October 2nd 2019, 12:15:00 am**)
