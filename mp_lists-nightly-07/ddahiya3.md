


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
==31718== Memcheck, a memory error detector
==31718== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31718== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31718== Command: ./test -r xml "List::merge"
==31718== 
==31718== 
==31718== HEAP SUMMARY:
==31718==     in use at exit: 0 bytes in 0 blocks
==31718==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==31718== 
==31718== All heap blocks were freed -- no leaks are possible
==31718== 
==31718== For counts of detected and suppressed errors, rerun with: -v
==31718== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31728== Memcheck, a memory error detector
==31728== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31728== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31728== Command: ./test -r xml "List::sort\ simple\ #1"
==31728== 
==31728== 
==31728== HEAP SUMMARY:
==31728==     in use at exit: 0 bytes in 0 blocks
==31728==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==31728== 
==31728== All heap blocks were freed -- no leaks are possible
==31728== 
==31728== For counts of detected and suppressed errors, rerun with: -v
==31728== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31739== Memcheck, a memory error detector
==31739== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31739== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31739== Command: ./test -r xml "List::insertFront\ size"
==31739== 
==31739== 
==31739== HEAP SUMMARY:
==31739==     in use at exit: 0 bytes in 0 blocks
==31739==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==31739== 
==31739== All heap blocks were freed -- no leaks are possible
==31739== 
==31739== For counts of detected and suppressed errors, rerun with: -v
==31739== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31743== Memcheck, a memory error detector
==31743== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31743== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31743== Command: ./test -r xml "List::insertBack\ size"
==31743== 
==31743== 
==31743== HEAP SUMMARY:
==31743==     in use at exit: 0 bytes in 0 blocks
==31743==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==31743== 
==31743== All heap blocks were freed -- no leaks are possible
==31743== 
==31743== For counts of detected and suppressed errors, rerun with: -v
==31743== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31747== Memcheck, a memory error detector
==31747== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31747== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31747== Command: ./test -r xml "List::insert\ contents"
==31747== 
==31747== 
==31747== HEAP SUMMARY:
==31747==     in use at exit: 0 bytes in 0 blocks
==31747==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==31747== 
==31747== All heap blocks were freed -- no leaks are possible
==31747== 
==31747== For counts of detected and suppressed errors, rerun with: -v
==31747== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31754== Memcheck, a memory error detector
==31754== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31754== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31754== Command: ./test -r xml "List::split\ simple"
==31754== 
==31754== 
==31754== HEAP SUMMARY:
==31754==     in use at exit: 0 bytes in 0 blocks
==31754==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==31754== 
==31754== All heap blocks were freed -- no leaks are possible
==31754== 
==31754== For counts of detected and suppressed errors, rerun with: -v
==31754== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31761== Memcheck, a memory error detector
==31761== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31761== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31761== Command: ./test -r xml "List::_destroy\ empty\ list"
==31761== 
==31761== 
==31761== HEAP SUMMARY:
==31761==     in use at exit: 0 bytes in 0 blocks
==31761==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==31761== 
==31761== All heap blocks were freed -- no leaks are possible
==31761== 
==31761== For counts of detected and suppressed errors, rerun with: -v
==31761== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31765== Memcheck, a memory error detector
==31765== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31765== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31765== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==31765== 
==31765== 
==31765== HEAP SUMMARY:
==31765==     in use at exit: 0 bytes in 0 blocks
==31765==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==31765== 
==31765== All heap blocks were freed -- no leaks are possible
==31765== 
==31765== For counts of detected and suppressed errors, rerun with: -v
==31765== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31769== Memcheck, a memory error detector
==31769== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31769== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31769== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==31769== 
==31769== 
==31769== HEAP SUMMARY:
==31769==     in use at exit: 0 bytes in 0 blocks
==31769==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==31769== 
==31769== All heap blocks were freed -- no leaks are possible
==31769== 
==31769== For counts of detected and suppressed errors, rerun with: -v
==31769== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31775== Memcheck, a memory error detector
==31775== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31775== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31775== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==31775== 
==31775== 
==31775== HEAP SUMMARY:
==31775==     in use at exit: 0 bytes in 0 blocks
==31775==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==31775== 
==31775== All heap blocks were freed -- no leaks are possible
==31775== 
==31775== For counts of detected and suppressed errors, rerun with: -v
==31775== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31803== Memcheck, a memory error detector
==31803== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31803== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31803== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==31803== 
==31803== 
==31803== HEAP SUMMARY:
==31803==     in use at exit: 0 bytes in 0 blocks
==31803==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==31803== 
==31803== All heap blocks were freed -- no leaks are possible
==31803== 
==31803== For counts of detected and suppressed errors, rerun with: -v
==31803== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31811== Memcheck, a memory error detector
==31811== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31811== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31811== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==31811== 
==31811== 
==31811== HEAP SUMMARY:
==31811==     in use at exit: 0 bytes in 0 blocks
==31811==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==31811== 
==31811== All heap blocks were freed -- no leaks are possible
==31811== 
==31811== For counts of detected and suppressed errors, rerun with: -v
==31811== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31817== Memcheck, a memory error detector
==31817== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31817== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31817== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==31817== 
==31817== 
==31817== HEAP SUMMARY:
==31817==     in use at exit: 0 bytes in 0 blocks
==31817==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==31817== 
==31817== All heap blocks were freed -- no leaks are possible
==31817== 
==31817== For counts of detected and suppressed errors, rerun with: -v
==31817== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31819== Memcheck, a memory error detector
==31819== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31819== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31819== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==31819== 
==31819== 
==31819== HEAP SUMMARY:
==31819==     in use at exit: 0 bytes in 0 blocks
==31819==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==31819== 
==31819== All heap blocks were freed -- no leaks are possible
==31819== 
==31819== For counts of detected and suppressed errors, rerun with: -v
==31819== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31821== Memcheck, a memory error detector
==31821== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31821== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31821== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==31821== 
==31821== 
==31821== HEAP SUMMARY:
==31821==     in use at exit: 0 bytes in 0 blocks
==31821==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==31821== 
==31821== All heap blocks were freed -- no leaks are possible
==31821== 
==31821== For counts of detected and suppressed errors, rerun with: -v
==31821== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31823== Memcheck, a memory error detector
==31823== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31823== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31823== Command: ./test -r xml "List::reverse\ simple"
==31823== 
==31823== 
==31823== HEAP SUMMARY:
==31823==     in use at exit: 0 bytes in 0 blocks
==31823==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==31823== 
==31823== All heap blocks were freed -- no leaks are possible
==31823== 
==31823== For counts of detected and suppressed errors, rerun with: -v
==31823== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31825== Memcheck, a memory error detector
==31825== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31825== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31825== Command: ./test -r xml "List::reverse\ edge\ cases"
==31825== 
==31825== 
==31825== HEAP SUMMARY:
==31825==     in use at exit: 0 bytes in 0 blocks
==31825==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==31825== 
==31825== All heap blocks were freed -- no leaks are possible
==31825== 
==31825== For counts of detected and suppressed errors, rerun with: -v
==31825== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31827== Memcheck, a memory error detector
==31827== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31827== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31827== Command: ./test -r xml "List::reverseNth\ #3"
==31827== 
==31827== 
==31827== HEAP SUMMARY:
==31827==     in use at exit: 0 bytes in 0 blocks
==31827==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==31827== 
==31827== All heap blocks were freed -- no leaks are possible
==31827== 
==31827== For counts of detected and suppressed errors, rerun with: -v
==31827== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31830== Memcheck, a memory error detector
==31830== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31830== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31830== Command: ./test -r xml "List::sort\ simple\ #3"
==31830== 
==31830== 
==31830== HEAP SUMMARY:
==31830==     in use at exit: 0 bytes in 0 blocks
==31830==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==31830== 
==31830== All heap blocks were freed -- no leaks are possible
==31830== 
==31830== For counts of detected and suppressed errors, rerun with: -v
==31830== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31855== Memcheck, a memory error detector
==31855== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31855== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31855== Command: ./test -r xml "List::insert\ contents\ #2"
==31855== 
==31855== 
==31855== HEAP SUMMARY:
==31855==     in use at exit: 0 bytes in 0 blocks
==31855==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==31855== 
==31855== All heap blocks were freed -- no leaks are possible
==31855== 
==31855== For counts of detected and suppressed errors, rerun with: -v
==31855== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31859== Memcheck, a memory error detector
==31859== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31859== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31859== Command: ./test -r xml "List::split\ edge\ cases"
==31859== 
==31859== 
==31859== HEAP SUMMARY:
==31859==     in use at exit: 0 bytes in 0 blocks
==31859==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==31859== 
==31859== All heap blocks were freed -- no leaks are possible
==31859== 
==31859== For counts of detected and suppressed errors, rerun with: -v
==31859== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==31863== Memcheck, a memory error detector
==31863== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31863== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31863== Command: ./test -r xml "List::waterfall\ simple"
==31863== 
==31863== 
==31863== HEAP SUMMARY:
==31863==     in use at exit: 0 bytes in 0 blocks
==31863==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==31863== 
==31863== All heap blocks were freed -- no leaks are possible
==31863== 
==31863== For counts of detected and suppressed errors, rerun with: -v
==31863== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
