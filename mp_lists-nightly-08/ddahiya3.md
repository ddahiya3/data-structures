


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
==24024== Memcheck, a memory error detector
==24024== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24024== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24024== Command: ./test -r xml "List::merge"
==24024== 
==24024== 
==24024== HEAP SUMMARY:
==24024==     in use at exit: 0 bytes in 0 blocks
==24024==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==24024== 
==24024== All heap blocks were freed -- no leaks are possible
==24024== 
==24024== For counts of detected and suppressed errors, rerun with: -v
==24024== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24034== Memcheck, a memory error detector
==24034== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24034== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24034== Command: ./test -r xml "List::sort\ simple\ #1"
==24034== 
==24034== 
==24034== HEAP SUMMARY:
==24034==     in use at exit: 0 bytes in 0 blocks
==24034==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==24034== 
==24034== All heap blocks were freed -- no leaks are possible
==24034== 
==24034== For counts of detected and suppressed errors, rerun with: -v
==24034== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24045== Memcheck, a memory error detector
==24045== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24045== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24045== Command: ./test -r xml "List::insertFront\ size"
==24045== 
==24045== 
==24045== HEAP SUMMARY:
==24045==     in use at exit: 0 bytes in 0 blocks
==24045==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==24045== 
==24045== All heap blocks were freed -- no leaks are possible
==24045== 
==24045== For counts of detected and suppressed errors, rerun with: -v
==24045== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24049== Memcheck, a memory error detector
==24049== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24049== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24049== Command: ./test -r xml "List::insertBack\ size"
==24049== 
==24049== 
==24049== HEAP SUMMARY:
==24049==     in use at exit: 0 bytes in 0 blocks
==24049==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==24049== 
==24049== All heap blocks were freed -- no leaks are possible
==24049== 
==24049== For counts of detected and suppressed errors, rerun with: -v
==24049== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24053== Memcheck, a memory error detector
==24053== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24053== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24053== Command: ./test -r xml "List::insert\ contents"
==24053== 
==24053== 
==24053== HEAP SUMMARY:
==24053==     in use at exit: 0 bytes in 0 blocks
==24053==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==24053== 
==24053== All heap blocks were freed -- no leaks are possible
==24053== 
==24053== For counts of detected and suppressed errors, rerun with: -v
==24053== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24060== Memcheck, a memory error detector
==24060== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24060== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24060== Command: ./test -r xml "List::split\ simple"
==24060== 
==24060== 
==24060== HEAP SUMMARY:
==24060==     in use at exit: 0 bytes in 0 blocks
==24060==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==24060== 
==24060== All heap blocks were freed -- no leaks are possible
==24060== 
==24060== For counts of detected and suppressed errors, rerun with: -v
==24060== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24067== Memcheck, a memory error detector
==24067== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24067== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24067== Command: ./test -r xml "List::_destroy\ empty\ list"
==24067== 
==24067== 
==24067== HEAP SUMMARY:
==24067==     in use at exit: 0 bytes in 0 blocks
==24067==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==24067== 
==24067== All heap blocks were freed -- no leaks are possible
==24067== 
==24067== For counts of detected and suppressed errors, rerun with: -v
==24067== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24071== Memcheck, a memory error detector
==24071== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24071== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24071== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==24071== 
==24071== 
==24071== HEAP SUMMARY:
==24071==     in use at exit: 0 bytes in 0 blocks
==24071==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==24071== 
==24071== All heap blocks were freed -- no leaks are possible
==24071== 
==24071== For counts of detected and suppressed errors, rerun with: -v
==24071== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24075== Memcheck, a memory error detector
==24075== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24075== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24075== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==24075== 
==24075== 
==24075== HEAP SUMMARY:
==24075==     in use at exit: 0 bytes in 0 blocks
==24075==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==24075== 
==24075== All heap blocks were freed -- no leaks are possible
==24075== 
==24075== For counts of detected and suppressed errors, rerun with: -v
==24075== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24079== Memcheck, a memory error detector
==24079== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24079== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24079== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==24079== 
==24079== 
==24079== HEAP SUMMARY:
==24079==     in use at exit: 0 bytes in 0 blocks
==24079==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==24079== 
==24079== All heap blocks were freed -- no leaks are possible
==24079== 
==24079== For counts of detected and suppressed errors, rerun with: -v
==24079== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24086== Memcheck, a memory error detector
==24086== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24086== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24086== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24086== 
==24086== 
==24086== HEAP SUMMARY:
==24086==     in use at exit: 0 bytes in 0 blocks
==24086==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==24086== 
==24086== All heap blocks were freed -- no leaks are possible
==24086== 
==24086== For counts of detected and suppressed errors, rerun with: -v
==24086== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24113== Memcheck, a memory error detector
==24113== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24113== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24113== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==24113== 
==24113== 
==24113== HEAP SUMMARY:
==24113==     in use at exit: 0 bytes in 0 blocks
==24113==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==24113== 
==24113== All heap blocks were freed -- no leaks are possible
==24113== 
==24113== For counts of detected and suppressed errors, rerun with: -v
==24113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24121== Memcheck, a memory error detector
==24121== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24121== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24121== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24121== 
==24121== 
==24121== HEAP SUMMARY:
==24121==     in use at exit: 0 bytes in 0 blocks
==24121==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==24121== 
==24121== All heap blocks were freed -- no leaks are possible
==24121== 
==24121== For counts of detected and suppressed errors, rerun with: -v
==24121== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24127== Memcheck, a memory error detector
==24127== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24127== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24127== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==24127== 
==24127== 
==24127== HEAP SUMMARY:
==24127==     in use at exit: 0 bytes in 0 blocks
==24127==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==24127== 
==24127== All heap blocks were freed -- no leaks are possible
==24127== 
==24127== For counts of detected and suppressed errors, rerun with: -v
==24127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24129== Memcheck, a memory error detector
==24129== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24129== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24129== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==24129== 
==24129== 
==24129== HEAP SUMMARY:
==24129==     in use at exit: 0 bytes in 0 blocks
==24129==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==24129== 
==24129== All heap blocks were freed -- no leaks are possible
==24129== 
==24129== For counts of detected and suppressed errors, rerun with: -v
==24129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24131== Memcheck, a memory error detector
==24131== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24131== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24131== Command: ./test -r xml "List::reverse\ simple"
==24131== 
==24131== 
==24131== HEAP SUMMARY:
==24131==     in use at exit: 0 bytes in 0 blocks
==24131==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==24131== 
==24131== All heap blocks were freed -- no leaks are possible
==24131== 
==24131== For counts of detected and suppressed errors, rerun with: -v
==24131== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24133== Memcheck, a memory error detector
==24133== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24133== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24133== Command: ./test -r xml "List::reverse\ edge\ cases"
==24133== 
==24133== 
==24133== HEAP SUMMARY:
==24133==     in use at exit: 0 bytes in 0 blocks
==24133==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==24133== 
==24133== All heap blocks were freed -- no leaks are possible
==24133== 
==24133== For counts of detected and suppressed errors, rerun with: -v
==24133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24135== Memcheck, a memory error detector
==24135== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24135== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24135== Command: ./test -r xml "List::reverseNth\ #3"
==24135== 
==24135== 
==24135== HEAP SUMMARY:
==24135==     in use at exit: 0 bytes in 0 blocks
==24135==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==24135== 
==24135== All heap blocks were freed -- no leaks are possible
==24135== 
==24135== For counts of detected and suppressed errors, rerun with: -v
==24135== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24138== Memcheck, a memory error detector
==24138== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24138== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24138== Command: ./test -r xml "List::sort\ simple\ #3"
==24138== 
==24138== 
==24138== HEAP SUMMARY:
==24138==     in use at exit: 0 bytes in 0 blocks
==24138==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==24138== 
==24138== All heap blocks were freed -- no leaks are possible
==24138== 
==24138== For counts of detected and suppressed errors, rerun with: -v
==24138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24140== Memcheck, a memory error detector
==24140== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24140== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24140== Command: ./test -r xml "List::insert\ contents\ #2"
==24140== 
==24140== 
==24140== HEAP SUMMARY:
==24140==     in use at exit: 0 bytes in 0 blocks
==24140==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==24140== 
==24140== All heap blocks were freed -- no leaks are possible
==24140== 
==24140== For counts of detected and suppressed errors, rerun with: -v
==24140== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24165== Memcheck, a memory error detector
==24165== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24165== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24165== Command: ./test -r xml "List::split\ edge\ cases"
==24165== 
==24165== 
==24165== HEAP SUMMARY:
==24165==     in use at exit: 0 bytes in 0 blocks
==24165==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==24165== 
==24165== All heap blocks were freed -- no leaks are possible
==24165== 
==24165== For counts of detected and suppressed errors, rerun with: -v
==24165== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24169== Memcheck, a memory error detector
==24169== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24169== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24169== Command: ./test -r xml "List::waterfall\ simple"
==24169== 
==24169== 
==24169== HEAP SUMMARY:
==24169==     in use at exit: 0 bytes in 0 blocks
==24169==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==24169== 
==24169== All heap blocks were freed -- no leaks are possible
==24169== 
==24169== For counts of detected and suppressed errors, rerun with: -v
==24169== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
