


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
==15320== Memcheck, a memory error detector
==15320== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15320== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15320== Command: ./test -r xml "List::merge"
==15320== 
==15320== 
==15320== HEAP SUMMARY:
==15320==     in use at exit: 0 bytes in 0 blocks
==15320==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==15320== 
==15320== All heap blocks were freed -- no leaks are possible
==15320== 
==15320== For counts of detected and suppressed errors, rerun with: -v
==15320== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15322== Memcheck, a memory error detector
==15322== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15322== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15322== Command: ./test -r xml "List::sort\ simple\ #1"
==15322== 
==15322== 
==15322== HEAP SUMMARY:
==15322==     in use at exit: 0 bytes in 0 blocks
==15322==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==15322== 
==15322== All heap blocks were freed -- no leaks are possible
==15322== 
==15322== For counts of detected and suppressed errors, rerun with: -v
==15322== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15324== Memcheck, a memory error detector
==15324== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15324== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15324== Command: ./test -r xml "List::sort\ simple\ #2"
==15324== 
==15324== 
==15324== HEAP SUMMARY:
==15324==     in use at exit: 0 bytes in 0 blocks
==15324==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==15324== 
==15324== All heap blocks were freed -- no leaks are possible
==15324== 
==15324== For counts of detected and suppressed errors, rerun with: -v
==15324== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15328== Memcheck, a memory error detector
==15328== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15328== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15328== Command: ./test -r xml "List::insertFront\ size"
==15328== 
==15328== 
==15328== HEAP SUMMARY:
==15328==     in use at exit: 0 bytes in 0 blocks
==15328==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==15328== 
==15328== All heap blocks were freed -- no leaks are possible
==15328== 
==15328== For counts of detected and suppressed errors, rerun with: -v
==15328== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15330== Memcheck, a memory error detector
==15330== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15330== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15330== Command: ./test -r xml "List::insertBack\ size"
==15330== 
==15330== 
==15330== HEAP SUMMARY:
==15330==     in use at exit: 0 bytes in 0 blocks
==15330==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==15330== 
==15330== All heap blocks were freed -- no leaks are possible
==15330== 
==15330== For counts of detected and suppressed errors, rerun with: -v
==15330== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15332== Memcheck, a memory error detector
==15332== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15332== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15332== Command: ./test -r xml "List::insert\ contents"
==15332== 
==15332== 
==15332== HEAP SUMMARY:
==15332==     in use at exit: 0 bytes in 0 blocks
==15332==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==15332== 
==15332== All heap blocks were freed -- no leaks are possible
==15332== 
==15332== For counts of detected and suppressed errors, rerun with: -v
==15332== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15335== Memcheck, a memory error detector
==15335== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15335== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15335== Command: ./test -r xml "List::split\ simple"
==15335== 
==15335== 
==15335== HEAP SUMMARY:
==15335==     in use at exit: 0 bytes in 0 blocks
==15335==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==15335== 
==15335== All heap blocks were freed -- no leaks are possible
==15335== 
==15335== For counts of detected and suppressed errors, rerun with: -v
==15335== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15338== Memcheck, a memory error detector
==15338== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15338== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15338== Command: ./test -r xml "List::_destroy\ empty\ list"
==15338== 
==15338== 
==15338== HEAP SUMMARY:
==15338==     in use at exit: 0 bytes in 0 blocks
==15338==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==15338== 
==15338== All heap blocks were freed -- no leaks are possible
==15338== 
==15338== For counts of detected and suppressed errors, rerun with: -v
==15338== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15340== Memcheck, a memory error detector
==15340== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15340== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15340== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==15340== 
==15340== 
==15340== HEAP SUMMARY:
==15340==     in use at exit: 0 bytes in 0 blocks
==15340==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==15340== 
==15340== All heap blocks were freed -- no leaks are possible
==15340== 
==15340== For counts of detected and suppressed errors, rerun with: -v
==15340== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15342== Memcheck, a memory error detector
==15342== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15342== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15342== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==15342== 
==15342== 
==15342== HEAP SUMMARY:
==15342==     in use at exit: 0 bytes in 0 blocks
==15342==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==15342== 
==15342== All heap blocks were freed -- no leaks are possible
==15342== 
==15342== For counts of detected and suppressed errors, rerun with: -v
==15342== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15344== Memcheck, a memory error detector
==15344== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15344== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15344== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==15344== 
==15344== 
==15344== HEAP SUMMARY:
==15344==     in use at exit: 0 bytes in 0 blocks
==15344==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==15344== 
==15344== All heap blocks were freed -- no leaks are possible
==15344== 
==15344== For counts of detected and suppressed errors, rerun with: -v
==15344== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15346== Memcheck, a memory error detector
==15346== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15346== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15346== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15346== 
==15346== 
==15346== HEAP SUMMARY:
==15346==     in use at exit: 0 bytes in 0 blocks
==15346==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==15346== 
==15346== All heap blocks were freed -- no leaks are possible
==15346== 
==15346== For counts of detected and suppressed errors, rerun with: -v
==15346== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15348== Memcheck, a memory error detector
==15348== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15348== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15348== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==15348== 
==15348== 
==15348== HEAP SUMMARY:
==15348==     in use at exit: 0 bytes in 0 blocks
==15348==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==15348== 
==15348== All heap blocks were freed -- no leaks are possible
==15348== 
==15348== For counts of detected and suppressed errors, rerun with: -v
==15348== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15350== Memcheck, a memory error detector
==15350== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15350== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15350== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==15350== 
==15350== 
==15350== HEAP SUMMARY:
==15350==     in use at exit: 0 bytes in 0 blocks
==15350==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==15350== 
==15350== All heap blocks were freed -- no leaks are possible
==15350== 
==15350== For counts of detected and suppressed errors, rerun with: -v
==15350== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15352== Memcheck, a memory error detector
==15352== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15352== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15352== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==15352== 
==15352== 
==15352== HEAP SUMMARY:
==15352==     in use at exit: 0 bytes in 0 blocks
==15352==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==15352== 
==15352== All heap blocks were freed -- no leaks are possible
==15352== 
==15352== For counts of detected and suppressed errors, rerun with: -v
==15352== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15354== Memcheck, a memory error detector
==15354== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15354== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15354== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==15354== 
==15354== 
==15354== HEAP SUMMARY:
==15354==     in use at exit: 0 bytes in 0 blocks
==15354==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==15354== 
==15354== All heap blocks were freed -- no leaks are possible
==15354== 
==15354== For counts of detected and suppressed errors, rerun with: -v
==15354== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15356== Memcheck, a memory error detector
==15356== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15356== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15356== Command: ./test -r xml "List::reverse\ simple"
==15356== 
==15356== 
==15356== HEAP SUMMARY:
==15356==     in use at exit: 0 bytes in 0 blocks
==15356==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==15356== 
==15356== All heap blocks were freed -- no leaks are possible
==15356== 
==15356== For counts of detected and suppressed errors, rerun with: -v
==15356== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15358== Memcheck, a memory error detector
==15358== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15358== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15358== Command: ./test -r xml "List::reverse\ edge\ cases"
==15358== 
==15358== 
==15358== HEAP SUMMARY:
==15358==     in use at exit: 0 bytes in 0 blocks
==15358==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==15358== 
==15358== All heap blocks were freed -- no leaks are possible
==15358== 
==15358== For counts of detected and suppressed errors, rerun with: -v
==15358== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15360== Memcheck, a memory error detector
==15360== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15360== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15360== Command: ./test -r xml "List::reverseNth\ #3"
==15360== 
==15360== 
==15360== HEAP SUMMARY:
==15360==     in use at exit: 0 bytes in 0 blocks
==15360==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==15360== 
==15360== All heap blocks were freed -- no leaks are possible
==15360== 
==15360== For counts of detected and suppressed errors, rerun with: -v
==15360== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15362== Memcheck, a memory error detector
==15362== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15362== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15362== Command: ./test -r xml "List::merge\ #2"
==15362== 
==15362== 
==15362== HEAP SUMMARY:
==15362==     in use at exit: 0 bytes in 0 blocks
==15362==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==15362== 
==15362== All heap blocks were freed -- no leaks are possible
==15362== 
==15362== For counts of detected and suppressed errors, rerun with: -v
==15362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15364== Memcheck, a memory error detector
==15364== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15364== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15364== Command: ./test -r xml "List::sort\ simple\ #3"
==15364== 
==15364== 
==15364== HEAP SUMMARY:
==15364==     in use at exit: 0 bytes in 0 blocks
==15364==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==15364== 
==15364== All heap blocks were freed -- no leaks are possible
==15364== 
==15364== For counts of detected and suppressed errors, rerun with: -v
==15364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15366== Memcheck, a memory error detector
==15366== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15366== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15366== Command: ./test -r xml "List::insert\ contents\ #2"
==15366== 
==15366== 
==15366== HEAP SUMMARY:
==15366==     in use at exit: 0 bytes in 0 blocks
==15366==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==15366== 
==15366== All heap blocks were freed -- no leaks are possible
==15366== 
==15366== For counts of detected and suppressed errors, rerun with: -v
==15366== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15368== Memcheck, a memory error detector
==15368== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15368== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15368== Command: ./test -r xml "List::split\ edge\ cases"
==15368== 
==15368== 
==15368== HEAP SUMMARY:
==15368==     in use at exit: 0 bytes in 0 blocks
==15368==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==15368== 
==15368== All heap blocks were freed -- no leaks are possible
==15368== 
==15368== For counts of detected and suppressed errors, rerun with: -v
==15368== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==15370== Memcheck, a memory error detector
==15370== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==15370== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==15370== Command: ./test -r xml "List::waterfall\ simple"
==15370== 
==15370== 
==15370== HEAP SUMMARY:
==15370==     in use at exit: 0 bytes in 0 blocks
==15370==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==15370== 
==15370== All heap blocks were freed -- no leaks are possible
==15370== 
==15370== For counts of detected and suppressed errors, rerun with: -v
==15370== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ddahiya3** using **5b115a917e90943749b5cfab1ee9dec9772e7ac3** (from **October 8th 2019, 12:15:00 am**)
