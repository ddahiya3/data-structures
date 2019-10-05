


## Score: 97/114 (85.09%)


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
==26406== Memcheck, a memory error detector
==26406== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26406== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26406== Command: ./test -r xml "List::merge"
==26406== 
==26406== 
==26406== HEAP SUMMARY:
==26406==     in use at exit: 0 bytes in 0 blocks
==26406==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==26406== 
==26406== All heap blocks were freed -- no leaks are possible
==26406== 
==26406== For counts of detected and suppressed errors, rerun with: -v
==26406== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26408== Memcheck, a memory error detector
==26408== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26408== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26408== Command: ./test -r xml "List::sort\ simple\ #1"
==26408== 
==26408== 
==26408== HEAP SUMMARY:
==26408==     in use at exit: 0 bytes in 0 blocks
==26408==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==26408== 
==26408== All heap blocks were freed -- no leaks are possible
==26408== 
==26408== For counts of detected and suppressed errors, rerun with: -v
==26408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="120">
        <Original>
          s.str() == "&lt; a b c >"
        </Original>
        <Expanded>
          "&lt; b a c >" == "&lt; a b c >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Original: b3 == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Original: b3 == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==26447== Memcheck, a memory error detector
==26447== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26447== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26447== Command: ./test -r xml "List::insertFront\ size"
==26447== 
==26447== 
==26447== HEAP SUMMARY:
==26447==     in use at exit: 0 bytes in 0 blocks
==26447==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==26447== 
==26447== All heap blocks were freed -- no leaks are possible
==26447== 
==26447== For counts of detected and suppressed errors, rerun with: -v
==26447== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26472== Memcheck, a memory error detector
==26472== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26472== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26472== Command: ./test -r xml "List::insertBack\ size"
==26472== 
==26472== 
==26472== HEAP SUMMARY:
==26472==     in use at exit: 0 bytes in 0 blocks
==26472==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==26472== 
==26472== All heap blocks were freed -- no leaks are possible
==26472== 
==26472== For counts of detected and suppressed errors, rerun with: -v
==26472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26498== Memcheck, a memory error detector
==26498== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26498== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26498== Command: ./test -r xml "List::insert\ contents"
==26498== 
==26498== 
==26498== HEAP SUMMARY:
==26498==     in use at exit: 0 bytes in 0 blocks
==26498==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==26498== 
==26498== All heap blocks were freed -- no leaks are possible
==26498== 
==26498== For counts of detected and suppressed errors, rerun with: -v
==26498== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26509== Memcheck, a memory error detector
==26509== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26509== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26509== Command: ./test -r xml "List::split\ simple"
==26509== 
==26509== 
==26509== HEAP SUMMARY:
==26509==     in use at exit: 0 bytes in 0 blocks
==26509==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==26509== 
==26509== All heap blocks were freed -- no leaks are possible
==26509== 
==26509== For counts of detected and suppressed errors, rerun with: -v
==26509== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26516== Memcheck, a memory error detector
==26516== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26516== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26516== Command: ./test -r xml "List::_destroy\ empty\ list"
==26516== 
==26516== 
==26516== HEAP SUMMARY:
==26516==     in use at exit: 0 bytes in 0 blocks
==26516==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==26516== 
==26516== All heap blocks were freed -- no leaks are possible
==26516== 
==26516== For counts of detected and suppressed errors, rerun with: -v
==26516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26518== Memcheck, a memory error detector
==26518== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26518== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26518== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==26518== 
==26518== 
==26518== HEAP SUMMARY:
==26518==     in use at exit: 0 bytes in 0 blocks
==26518==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==26518== 
==26518== All heap blocks were freed -- no leaks are possible
==26518== 
==26518== For counts of detected and suppressed errors, rerun with: -v
==26518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26520== Memcheck, a memory error detector
==26520== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26520== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26520== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==26520== 
==26520== 
==26520== HEAP SUMMARY:
==26520==     in use at exit: 0 bytes in 0 blocks
==26520==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==26520== 
==26520== All heap blocks were freed -- no leaks are possible
==26520== 
==26520== For counts of detected and suppressed errors, rerun with: -v
==26520== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26522== Memcheck, a memory error detector
==26522== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26522== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26522== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==26522== 
==26522== 
==26522== HEAP SUMMARY:
==26522==     in use at exit: 0 bytes in 0 blocks
==26522==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==26522== 
==26522== All heap blocks were freed -- no leaks are possible
==26522== 
==26522== For counts of detected and suppressed errors, rerun with: -v
==26522== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26524== Memcheck, a memory error detector
==26524== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26524== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26524== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26524== 
==26524== 
==26524== HEAP SUMMARY:
==26524==     in use at exit: 0 bytes in 0 blocks
==26524==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==26524== 
==26524== All heap blocks were freed -- no leaks are possible
==26524== 
==26524== For counts of detected and suppressed errors, rerun with: -v
==26524== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26526== Memcheck, a memory error detector
==26526== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26526== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26526== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==26526== 
==26526== 
==26526== HEAP SUMMARY:
==26526==     in use at exit: 0 bytes in 0 blocks
==26526==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==26526== 
==26526== All heap blocks were freed -- no leaks are possible
==26526== 
==26526== For counts of detected and suppressed errors, rerun with: -v
==26526== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26551== Memcheck, a memory error detector
==26551== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26551== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26551== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26551== 
==26551== 
==26551== HEAP SUMMARY:
==26551==     in use at exit: 0 bytes in 0 blocks
==26551==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==26551== 
==26551== All heap blocks were freed -- no leaks are possible
==26551== 
==26551== For counts of detected and suppressed errors, rerun with: -v
==26551== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26556== Memcheck, a memory error detector
==26556== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26556== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26556== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==26556== 
==26556== 
==26556== HEAP SUMMARY:
==26556==     in use at exit: 0 bytes in 0 blocks
==26556==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==26556== 
==26556== All heap blocks were freed -- no leaks are possible
==26556== 
==26556== For counts of detected and suppressed errors, rerun with: -v
==26556== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26567== Memcheck, a memory error detector
==26567== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26567== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26567== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==26567== 
==26567== 
==26567== HEAP SUMMARY:
==26567==     in use at exit: 0 bytes in 0 blocks
==26567==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==26567== 
==26567== All heap blocks were freed -- no leaks are possible
==26567== 
==26567== For counts of detected and suppressed errors, rerun with: -v
==26567== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26597== Memcheck, a memory error detector
==26597== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26597== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26597== Command: ./test -r xml "List::reverse\ simple"
==26597== 
==26597== 
==26597== HEAP SUMMARY:
==26597==     in use at exit: 0 bytes in 0 blocks
==26597==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==26597== 
==26597== All heap blocks were freed -- no leaks are possible
==26597== 
==26597== For counts of detected and suppressed errors, rerun with: -v
==26597== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26625== Memcheck, a memory error detector
==26625== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26625== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26625== Command: ./test -r xml "List::reverse\ edge\ cases"
==26625== 
==26625== 
==26625== HEAP SUMMARY:
==26625==     in use at exit: 0 bytes in 0 blocks
==26625==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==26625== 
==26625== All heap blocks were freed -- no leaks are possible
==26625== 
==26625== For counts of detected and suppressed errors, rerun with: -v
==26625== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26633== Memcheck, a memory error detector
==26633== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26633== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26633== Command: ./test -r xml "List::reverseNth\ #3"
==26633== 
==26633== 
==26633== HEAP SUMMARY:
==26633==     in use at exit: 0 bytes in 0 blocks
==26633==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==26633== 
==26633== All heap blocks were freed -- no leaks are possible
==26633== 
==26633== For counts of detected and suppressed errors, rerun with: -v
==26633== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; 2 1 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==26638== Memcheck, a memory error detector
==26638== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26638== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26638== Command: ./test -r xml "List::sort\ simple\ #3"
==26638== 
==26638== 
==26638== HEAP SUMMARY:
==26638==     in use at exit: 0 bytes in 0 blocks
==26638==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==26638== 
==26638== All heap blocks were freed -- no leaks are possible
==26638== 
==26638== For counts of detected and suppressed errors, rerun with: -v
==26638== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26642== Memcheck, a memory error detector
==26642== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26642== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26642== Command: ./test -r xml "List::insert\ contents\ #2"
==26642== 
==26642== 
==26642== HEAP SUMMARY:
==26642==     in use at exit: 0 bytes in 0 blocks
==26642==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==26642== 
==26642== All heap blocks were freed -- no leaks are possible
==26642== 
==26642== For counts of detected and suppressed errors, rerun with: -v
==26642== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26644== Memcheck, a memory error detector
==26644== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26644== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26644== Command: ./test -r xml "List::split\ edge\ cases"
==26644== 
==26644== 
==26644== HEAP SUMMARY:
==26644==     in use at exit: 0 bytes in 0 blocks
==26644==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==26644== 
==26644== All heap blocks were freed -- no leaks are possible
==26644== 
==26644== For counts of detected and suppressed errors, rerun with: -v
==26644== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26646== Memcheck, a memory error detector
==26646== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==26646== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==26646== Command: ./test -r xml "List::waterfall\ simple"
==26646== 
==26646== 
==26646== HEAP SUMMARY:
==26646==     in use at exit: 0 bytes in 0 blocks
==26646==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==26646== 
==26646== All heap blocks were freed -- no leaks are possible
==26646== 
==26646== For counts of detected and suppressed errors, rerun with: -v
==26646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
