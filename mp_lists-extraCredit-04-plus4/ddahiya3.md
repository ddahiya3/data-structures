


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
==14226== Memcheck, a memory error detector
==14226== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14226== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14226== Command: ./test -r xml "List::insertFront\ size"
==14226== 
==14226== 
==14226== HEAP SUMMARY:
==14226==     in use at exit: 0 bytes in 0 blocks
==14226==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==14226== 
==14226== All heap blocks were freed -- no leaks are possible
==14226== 
==14226== For counts of detected and suppressed errors, rerun with: -v
==14226== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14230== Memcheck, a memory error detector
==14230== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14230== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14230== Command: ./test -r xml "List::insertBack\ size"
==14230== 
==14230== 
==14230== HEAP SUMMARY:
==14230==     in use at exit: 0 bytes in 0 blocks
==14230==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==14230== 
==14230== All heap blocks were freed -- no leaks are possible
==14230== 
==14230== For counts of detected and suppressed errors, rerun with: -v
==14230== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14233== Memcheck, a memory error detector
==14233== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14233== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14233== Command: ./test -r xml "List::insert\ contents"
==14233== 
==14233== 
==14233== HEAP SUMMARY:
==14233==     in use at exit: 0 bytes in 0 blocks
==14233==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==14233== 
==14233== All heap blocks were freed -- no leaks are possible
==14233== 
==14233== For counts of detected and suppressed errors, rerun with: -v
==14233== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14241== Memcheck, a memory error detector
==14241== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14241== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14241== Command: ./test -r xml "List::split\ simple"
==14241== 
==14241== 
==14241== HEAP SUMMARY:
==14241==     in use at exit: 0 bytes in 0 blocks
==14241==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==14241== 
==14241== All heap blocks were freed -- no leaks are possible
==14241== 
==14241== For counts of detected and suppressed errors, rerun with: -v
==14241== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14248== Memcheck, a memory error detector
==14248== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14248== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14248== Command: ./test -r xml "List::_destroy\ empty\ list"
==14248== 
==14248== 
==14248== HEAP SUMMARY:
==14248==     in use at exit: 0 bytes in 0 blocks
==14248==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==14248== 
==14248== All heap blocks were freed -- no leaks are possible
==14248== 
==14248== For counts of detected and suppressed errors, rerun with: -v
==14248== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14252== Memcheck, a memory error detector
==14252== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14252== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14252== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==14252== 
==14252== 
==14252== HEAP SUMMARY:
==14252==     in use at exit: 0 bytes in 0 blocks
==14252==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==14252== 
==14252== All heap blocks were freed -- no leaks are possible
==14252== 
==14252== For counts of detected and suppressed errors, rerun with: -v
==14252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14256== Memcheck, a memory error detector
==14256== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14256== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14256== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==14256== 
==14256== 
==14256== HEAP SUMMARY:
==14256==     in use at exit: 0 bytes in 0 blocks
==14256==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==14256== 
==14256== All heap blocks were freed -- no leaks are possible
==14256== 
==14256== For counts of detected and suppressed errors, rerun with: -v
==14256== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14260== Memcheck, a memory error detector
==14260== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14260== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14260== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==14260== 
==14260== 
==14260== HEAP SUMMARY:
==14260==     in use at exit: 0 bytes in 0 blocks
==14260==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==14260== 
==14260== All heap blocks were freed -- no leaks are possible
==14260== 
==14260== For counts of detected and suppressed errors, rerun with: -v
==14260== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14264== Memcheck, a memory error detector
==14264== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14264== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14264== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14264== 
==14264== 
==14264== HEAP SUMMARY:
==14264==     in use at exit: 0 bytes in 0 blocks
==14264==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==14264== 
==14264== All heap blocks were freed -- no leaks are possible
==14264== 
==14264== For counts of detected and suppressed errors, rerun with: -v
==14264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14268== Memcheck, a memory error detector
==14268== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14268== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14268== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==14268== 
==14268== 
==14268== HEAP SUMMARY:
==14268==     in use at exit: 0 bytes in 0 blocks
==14268==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==14268== 
==14268== All heap blocks were freed -- no leaks are possible
==14268== 
==14268== For counts of detected and suppressed errors, rerun with: -v
==14268== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14272== Memcheck, a memory error detector
==14272== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14272== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14272== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==14272== 
==14272== 
==14272== HEAP SUMMARY:
==14272==     in use at exit: 0 bytes in 0 blocks
==14272==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==14272== 
==14272== All heap blocks were freed -- no leaks are possible
==14272== 
==14272== For counts of detected and suppressed errors, rerun with: -v
==14272== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14279== Memcheck, a memory error detector
==14279== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14279== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14279== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==14279== 
==14279== 
==14279== HEAP SUMMARY:
==14279==     in use at exit: 0 bytes in 0 blocks
==14279==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==14279== 
==14279== All heap blocks were freed -- no leaks are possible
==14279== 
==14279== For counts of detected and suppressed errors, rerun with: -v
==14279== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14285== Memcheck, a memory error detector
==14285== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14285== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14285== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==14285== 
==14285== 
==14285== HEAP SUMMARY:
==14285==     in use at exit: 0 bytes in 0 blocks
==14285==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==14285== 
==14285== All heap blocks were freed -- no leaks are possible
==14285== 
==14285== For counts of detected and suppressed errors, rerun with: -v
==14285== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14291== Memcheck, a memory error detector
==14291== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14291== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14291== Command: ./test -r xml "List::insert\ contents\ #2"
==14291== 
==14291== 
==14291== HEAP SUMMARY:
==14291==     in use at exit: 0 bytes in 0 blocks
==14291==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==14291== 
==14291== All heap blocks were freed -- no leaks are possible
==14291== 
==14291== For counts of detected and suppressed errors, rerun with: -v
==14291== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14329== Memcheck, a memory error detector
==14329== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14329== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14329== Command: ./test -r xml "List::split\ edge\ cases"
==14329== 
==14329== 
==14329== HEAP SUMMARY:
==14329==     in use at exit: 0 bytes in 0 blocks
==14329==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==14329== 
==14329== All heap blocks were freed -- no leaks are possible
==14329== 
==14329== For counts of detected and suppressed errors, rerun with: -v
==14329== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==14335== Memcheck, a memory error detector
==14335== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14335== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14335== Command: ./test -r xml "List::waterfall\ simple"
==14335== 
==14335== 
==14335== HEAP SUMMARY:
==14335==     in use at exit: 0 bytes in 0 blocks
==14335==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==14335== 
==14335== All heap blocks were freed -- no leaks are possible
==14335== 
==14335== For counts of detected and suppressed errors, rerun with: -v
==14335== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ddahiya3** using **b985ec8e1f6231111dfe7f0f1139cfc267b9596d** (from **October 4th 2019, 12:15:00 am**)
