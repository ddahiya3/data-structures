


## Score: 114/114 (100.00%)


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
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==5788== Memcheck, a memory error detector
==5788== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5788== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5788== Command: ./test -r xml "List::merge"
==5788== 
==5788== 
==5788== HEAP SUMMARY:
==5788==     in use at exit: 0 bytes in 0 blocks
==5788==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==5788== 
==5788== All heap blocks were freed -- no leaks are possible
==5788== 
==5788== For counts of detected and suppressed errors, rerun with: -v
==5788== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==5790== Memcheck, a memory error detector
==5790== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5790== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5790== Command: ./test -r xml "List::sort\ simple\ #1"
==5790== 
==5790== 
==5790== HEAP SUMMARY:
==5790==     in use at exit: 0 bytes in 0 blocks
==5790==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==5790== 
==5790== All heap blocks were freed -- no leaks are possible
==5790== 
==5790== For counts of detected and suppressed errors, rerun with: -v
==5790== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==5792== Memcheck, a memory error detector
==5792== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5792== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5792== Command: ./test -r xml "List::sort\ simple\ #2"
==5792== 
==5792== 
==5792== HEAP SUMMARY:
==5792==     in use at exit: 0 bytes in 0 blocks
==5792==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==5792== 
==5792== All heap blocks were freed -- no leaks are possible
==5792== 
==5792== For counts of detected and suppressed errors, rerun with: -v
==5792== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==5796== Memcheck, a memory error detector
==5796== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5796== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5796== Command: ./test -r xml "List::insertFront\ size"
==5796== 
==5796== 
==5796== HEAP SUMMARY:
==5796==     in use at exit: 0 bytes in 0 blocks
==5796==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==5796== 
==5796== All heap blocks were freed -- no leaks are possible
==5796== 
==5796== For counts of detected and suppressed errors, rerun with: -v
==5796== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5798== Memcheck, a memory error detector
==5798== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5798== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5798== Command: ./test -r xml "List::insertBack\ size"
==5798== 
==5798== 
==5798== HEAP SUMMARY:
==5798==     in use at exit: 0 bytes in 0 blocks
==5798==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==5798== 
==5798== All heap blocks were freed -- no leaks are possible
==5798== 
==5798== For counts of detected and suppressed errors, rerun with: -v
==5798== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5800== Memcheck, a memory error detector
==5800== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5800== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5800== Command: ./test -r xml "List::insert\ contents"
==5800== 
==5800== 
==5800== HEAP SUMMARY:
==5800==     in use at exit: 0 bytes in 0 blocks
==5800==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==5800== 
==5800== All heap blocks were freed -- no leaks are possible
==5800== 
==5800== For counts of detected and suppressed errors, rerun with: -v
==5800== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5803== Memcheck, a memory error detector
==5803== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5803== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5803== Command: ./test -r xml "List::split\ simple"
==5803== 
==5803== 
==5803== HEAP SUMMARY:
==5803==     in use at exit: 0 bytes in 0 blocks
==5803==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==5803== 
==5803== All heap blocks were freed -- no leaks are possible
==5803== 
==5803== For counts of detected and suppressed errors, rerun with: -v
==5803== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5806== Memcheck, a memory error detector
==5806== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5806== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5806== Command: ./test -r xml "List::_destroy\ empty\ list"
==5806== 
==5806== 
==5806== HEAP SUMMARY:
==5806==     in use at exit: 0 bytes in 0 blocks
==5806==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==5806== 
==5806== All heap blocks were freed -- no leaks are possible
==5806== 
==5806== For counts of detected and suppressed errors, rerun with: -v
==5806== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5808== Memcheck, a memory error detector
==5808== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5808== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5808== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==5808== 
==5808== 
==5808== HEAP SUMMARY:
==5808==     in use at exit: 0 bytes in 0 blocks
==5808==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==5808== 
==5808== All heap blocks were freed -- no leaks are possible
==5808== 
==5808== For counts of detected and suppressed errors, rerun with: -v
==5808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5810== Memcheck, a memory error detector
==5810== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5810== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5810== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==5810== 
==5810== 
==5810== HEAP SUMMARY:
==5810==     in use at exit: 0 bytes in 0 blocks
==5810==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==5810== 
==5810== All heap blocks were freed -- no leaks are possible
==5810== 
==5810== For counts of detected and suppressed errors, rerun with: -v
==5810== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5812== Memcheck, a memory error detector
==5812== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5812== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5812== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==5812== 
==5812== 
==5812== HEAP SUMMARY:
==5812==     in use at exit: 0 bytes in 0 blocks
==5812==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==5812== 
==5812== All heap blocks were freed -- no leaks are possible
==5812== 
==5812== For counts of detected and suppressed errors, rerun with: -v
==5812== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5814== Memcheck, a memory error detector
==5814== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5814== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5814== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5814== 
==5814== 
==5814== HEAP SUMMARY:
==5814==     in use at exit: 0 bytes in 0 blocks
==5814==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==5814== 
==5814== All heap blocks were freed -- no leaks are possible
==5814== 
==5814== For counts of detected and suppressed errors, rerun with: -v
==5814== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5816== Memcheck, a memory error detector
==5816== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5816== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5816== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==5816== 
==5816== 
==5816== HEAP SUMMARY:
==5816==     in use at exit: 0 bytes in 0 blocks
==5816==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==5816== 
==5816== All heap blocks were freed -- no leaks are possible
==5816== 
==5816== For counts of detected and suppressed errors, rerun with: -v
==5816== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5818== Memcheck, a memory error detector
==5818== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5818== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5818== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5818== 
==5818== 
==5818== HEAP SUMMARY:
==5818==     in use at exit: 0 bytes in 0 blocks
==5818==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==5818== 
==5818== All heap blocks were freed -- no leaks are possible
==5818== 
==5818== For counts of detected and suppressed errors, rerun with: -v
==5818== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5820== Memcheck, a memory error detector
==5820== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5820== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5820== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==5820== 
==5820== 
==5820== HEAP SUMMARY:
==5820==     in use at exit: 0 bytes in 0 blocks
==5820==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==5820== 
==5820== All heap blocks were freed -- no leaks are possible
==5820== 
==5820== For counts of detected and suppressed errors, rerun with: -v
==5820== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5822== Memcheck, a memory error detector
==5822== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5822== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5822== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==5822== 
==5822== 
==5822== HEAP SUMMARY:
==5822==     in use at exit: 0 bytes in 0 blocks
==5822==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==5822== 
==5822== All heap blocks were freed -- no leaks are possible
==5822== 
==5822== For counts of detected and suppressed errors, rerun with: -v
==5822== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==5824== Memcheck, a memory error detector
==5824== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5824== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5824== Command: ./test -r xml "List::reverse\ simple"
==5824== 
==5824== 
==5824== HEAP SUMMARY:
==5824==     in use at exit: 0 bytes in 0 blocks
==5824==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==5824== 
==5824== All heap blocks were freed -- no leaks are possible
==5824== 
==5824== For counts of detected and suppressed errors, rerun with: -v
==5824== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==5826== Memcheck, a memory error detector
==5826== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5826== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5826== Command: ./test -r xml "List::reverse\ edge\ cases"
==5826== 
==5826== 
==5826== HEAP SUMMARY:
==5826==     in use at exit: 0 bytes in 0 blocks
==5826==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==5826== 
==5826== All heap blocks were freed -- no leaks are possible
==5826== 
==5826== For counts of detected and suppressed errors, rerun with: -v
==5826== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==5828== Memcheck, a memory error detector
==5828== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5828== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5828== Command: ./test -r xml "List::reverseNth\ #3"
==5828== 
==5828== 
==5828== HEAP SUMMARY:
==5828==     in use at exit: 0 bytes in 0 blocks
==5828==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==5828== 
==5828== All heap blocks were freed -- no leaks are possible
==5828== 
==5828== For counts of detected and suppressed errors, rerun with: -v
==5828== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==5830== Memcheck, a memory error detector
==5830== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5830== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5830== Command: ./test -r xml "List::merge\ #2"
==5830== 
==5830== 
==5830== HEAP SUMMARY:
==5830==     in use at exit: 0 bytes in 0 blocks
==5830==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==5830== 
==5830== All heap blocks were freed -- no leaks are possible
==5830== 
==5830== For counts of detected and suppressed errors, rerun with: -v
==5830== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==5832== Memcheck, a memory error detector
==5832== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5832== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5832== Command: ./test -r xml "List::sort\ simple\ #3"
==5832== 
==5832== 
==5832== HEAP SUMMARY:
==5832==     in use at exit: 0 bytes in 0 blocks
==5832==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==5832== 
==5832== All heap blocks were freed -- no leaks are possible
==5832== 
==5832== For counts of detected and suppressed errors, rerun with: -v
==5832== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
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
==5834== Memcheck, a memory error detector
==5834== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5834== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5834== Command: ./test -r xml "List::insert\ contents\ #2"
==5834== 
==5834== 
==5834== HEAP SUMMARY:
==5834==     in use at exit: 0 bytes in 0 blocks
==5834==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==5834== 
==5834== All heap blocks were freed -- no leaks are possible
==5834== 
==5834== For counts of detected and suppressed errors, rerun with: -v
==5834== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5836== Memcheck, a memory error detector
==5836== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5836== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5836== Command: ./test -r xml "List::split\ edge\ cases"
==5836== 
==5836== 
==5836== HEAP SUMMARY:
==5836==     in use at exit: 0 bytes in 0 blocks
==5836==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==5836== 
==5836== All heap blocks were freed -- no leaks are possible
==5836== 
==5836== For counts of detected and suppressed errors, rerun with: -v
==5836== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5838== Memcheck, a memory error detector
==5838== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5838== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5838== Command: ./test -r xml "List::waterfall\ simple"
==5838== 
==5838== 
==5838== HEAP SUMMARY:
==5838==     in use at exit: 0 bytes in 0 blocks
==5838==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==5838== 
==5838== All heap blocks were freed -- no leaks are possible
==5838== 
==5838== For counts of detected and suppressed errors, rerun with: -v
==5838== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ddahiya3** using **5b115a917e90943749b5cfab1ee9dec9772e7ac3** (from **October 9th 2019, 12:15:00 am**)
