


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
==5477== Memcheck, a memory error detector
==5477== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5477== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5477== Command: ./test -r xml "List::insertFront\ size"
==5477== 
==5477== 
==5477== HEAP SUMMARY:
==5477==     in use at exit: 0 bytes in 0 blocks
==5477==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==5477== 
==5477== All heap blocks were freed -- no leaks are possible
==5477== 
==5477== For counts of detected and suppressed errors, rerun with: -v
==5477== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5481== Memcheck, a memory error detector
==5481== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5481== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5481== Command: ./test -r xml "List::insertBack\ size"
==5481== 
==5481== 
==5481== HEAP SUMMARY:
==5481==     in use at exit: 0 bytes in 0 blocks
==5481==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==5481== 
==5481== All heap blocks were freed -- no leaks are possible
==5481== 
==5481== For counts of detected and suppressed errors, rerun with: -v
==5481== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5485== Memcheck, a memory error detector
==5485== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5485== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5485== Command: ./test -r xml "List::insert\ contents"
==5485== 
==5485== 
==5485== HEAP SUMMARY:
==5485==     in use at exit: 0 bytes in 0 blocks
==5485==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==5485== 
==5485== All heap blocks were freed -- no leaks are possible
==5485== 
==5485== For counts of detected and suppressed errors, rerun with: -v
==5485== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5492== Memcheck, a memory error detector
==5492== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5492== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5492== Command: ./test -r xml "List::split\ simple"
==5492== 
==5492== 
==5492== HEAP SUMMARY:
==5492==     in use at exit: 0 bytes in 0 blocks
==5492==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==5492== 
==5492== All heap blocks were freed -- no leaks are possible
==5492== 
==5492== For counts of detected and suppressed errors, rerun with: -v
==5492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5497== Memcheck, a memory error detector
==5497== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5497== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5497== Command: ./test -r xml "List::_destroy\ empty\ list"
==5497== 
==5497== 
==5497== HEAP SUMMARY:
==5497==     in use at exit: 0 bytes in 0 blocks
==5497==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==5497== 
==5497== All heap blocks were freed -- no leaks are possible
==5497== 
==5497== For counts of detected and suppressed errors, rerun with: -v
==5497== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5501== Memcheck, a memory error detector
==5501== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5501== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5501== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==5501== 
==5501== 
==5501== HEAP SUMMARY:
==5501==     in use at exit: 0 bytes in 0 blocks
==5501==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==5501== 
==5501== All heap blocks were freed -- no leaks are possible
==5501== 
==5501== For counts of detected and suppressed errors, rerun with: -v
==5501== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5505== Memcheck, a memory error detector
==5505== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5505== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5505== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==5505== 
==5505== 
==5505== HEAP SUMMARY:
==5505==     in use at exit: 0 bytes in 0 blocks
==5505==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==5505== 
==5505== All heap blocks were freed -- no leaks are possible
==5505== 
==5505== For counts of detected and suppressed errors, rerun with: -v
==5505== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5510== Memcheck, a memory error detector
==5510== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5510== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5510== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==5510== 
==5510== 
==5510== HEAP SUMMARY:
==5510==     in use at exit: 0 bytes in 0 blocks
==5510==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==5510== 
==5510== All heap blocks were freed -- no leaks are possible
==5510== 
==5510== For counts of detected and suppressed errors, rerun with: -v
==5510== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5520== Memcheck, a memory error detector
==5520== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5520== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5520== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5520== 
==5520== 
==5520== HEAP SUMMARY:
==5520==     in use at exit: 0 bytes in 0 blocks
==5520==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==5520== 
==5520== All heap blocks were freed -- no leaks are possible
==5520== 
==5520== For counts of detected and suppressed errors, rerun with: -v
==5520== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5524== Memcheck, a memory error detector
==5524== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5524== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5524== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==5524== 
==5524== 
==5524== HEAP SUMMARY:
==5524==     in use at exit: 0 bytes in 0 blocks
==5524==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==5524== 
==5524== All heap blocks were freed -- no leaks are possible
==5524== 
==5524== For counts of detected and suppressed errors, rerun with: -v
==5524== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5528== Memcheck, a memory error detector
==5528== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5528== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5528== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5528== 
==5528== 
==5528== HEAP SUMMARY:
==5528==     in use at exit: 0 bytes in 0 blocks
==5528==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==5528== 
==5528== All heap blocks were freed -- no leaks are possible
==5528== 
==5528== For counts of detected and suppressed errors, rerun with: -v
==5528== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5560== Memcheck, a memory error detector
==5560== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5560== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5560== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==5560== 
==5560== 
==5560== HEAP SUMMARY:
==5560==     in use at exit: 0 bytes in 0 blocks
==5560==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==5560== 
==5560== All heap blocks were freed -- no leaks are possible
==5560== 
==5560== For counts of detected and suppressed errors, rerun with: -v
==5560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5566== Memcheck, a memory error detector
==5566== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5566== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5566== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==5566== 
==5566== 
==5566== HEAP SUMMARY:
==5566==     in use at exit: 0 bytes in 0 blocks
==5566==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==5566== 
==5566== All heap blocks were freed -- no leaks are possible
==5566== 
==5566== For counts of detected and suppressed errors, rerun with: -v
==5566== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5570== Memcheck, a memory error detector
==5570== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5570== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5570== Command: ./test -r xml "List::insert\ contents\ #2"
==5570== 
==5570== 
==5570== HEAP SUMMARY:
==5570==     in use at exit: 0 bytes in 0 blocks
==5570==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==5570== 
==5570== All heap blocks were freed -- no leaks are possible
==5570== 
==5570== For counts of detected and suppressed errors, rerun with: -v
==5570== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5576== Memcheck, a memory error detector
==5576== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5576== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5576== Command: ./test -r xml "List::split\ edge\ cases"
==5576== 
==5576== 
==5576== HEAP SUMMARY:
==5576==     in use at exit: 0 bytes in 0 blocks
==5576==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==5576== 
==5576== All heap blocks were freed -- no leaks are possible
==5576== 
==5576== For counts of detected and suppressed errors, rerun with: -v
==5576== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5581== Memcheck, a memory error detector
==5581== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5581== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5581== Command: ./test -r xml "List::waterfall\ simple"
==5581== 
==5581== 
==5581== HEAP SUMMARY:
==5581==     in use at exit: 0 bytes in 0 blocks
==5581==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
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
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **9e72c631ecd42cd81fd922777cc9430f2ba20151** (from **October 7th 2019, 12:15:00 am**)
