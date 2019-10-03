


## Score: 59/114 (51.75%)


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


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
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
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==1051== Memcheck, a memory error detector
==1051== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1051== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1051== Command: ./test -r xml "List::insertFront\ size"
==1051== 
==1051== 
==1051== HEAP SUMMARY:
==1051==     in use at exit: 0 bytes in 0 blocks
==1051==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==1051== 
==1051== All heap blocks were freed -- no leaks are possible
==1051== 
==1051== For counts of detected and suppressed errors, rerun with: -v
==1051== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1055== Memcheck, a memory error detector
==1055== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1055== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1055== Command: ./test -r xml "List::insertBack\ size"
==1055== 
==1055== 
==1055== HEAP SUMMARY:
==1055==     in use at exit: 0 bytes in 0 blocks
==1055==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==1055== 
==1055== All heap blocks were freed -- no leaks are possible
==1055== 
==1055== For counts of detected and suppressed errors, rerun with: -v
==1055== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1060== Memcheck, a memory error detector
==1060== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1060== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1060== Command: ./test -r xml "List::insert\ contents"
==1060== 
==1060== 
==1060== HEAP SUMMARY:
==1060==     in use at exit: 0 bytes in 0 blocks
==1060==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==1060== 
==1060== All heap blocks were freed -- no leaks are possible
==1060== 
==1060== For counts of detected and suppressed errors, rerun with: -v
==1060== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1073== Memcheck, a memory error detector
==1073== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1073== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1073== Command: ./test -r xml "List::split\ simple"
==1073== 
==1073== 
==1073== HEAP SUMMARY:
==1073==     in use at exit: 0 bytes in 0 blocks
==1073==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==1073== 
==1073== All heap blocks were freed -- no leaks are possible
==1073== 
==1073== For counts of detected and suppressed errors, rerun with: -v
==1073== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1082== Memcheck, a memory error detector
==1082== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1082== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1082== Command: ./test -r xml "List::_destroy\ empty\ list"
==1082== 
==1082== 
==1082== HEAP SUMMARY:
==1082==     in use at exit: 0 bytes in 0 blocks
==1082==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==1082== 
==1082== All heap blocks were freed -- no leaks are possible
==1082== 
==1082== For counts of detected and suppressed errors, rerun with: -v
==1082== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1114== Memcheck, a memory error detector
==1114== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1114== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1114== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==1114== 
==1114== 
==1114== HEAP SUMMARY:
==1114==     in use at exit: 0 bytes in 0 blocks
==1114==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==1114== 
==1114== All heap blocks were freed -- no leaks are possible
==1114== 
==1114== For counts of detected and suppressed errors, rerun with: -v
==1114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1122== Memcheck, a memory error detector
==1122== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1122== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1122== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==1122== 
==1122== 
==1122== HEAP SUMMARY:
==1122==     in use at exit: 0 bytes in 0 blocks
==1122==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==1122== 
==1122== All heap blocks were freed -- no leaks are possible
==1122== 
==1122== For counts of detected and suppressed errors, rerun with: -v
==1122== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1126== Memcheck, a memory error detector
==1126== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1126== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1126== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==1126== 
==1126== 
==1126== HEAP SUMMARY:
==1126==     in use at exit: 0 bytes in 0 blocks
==1126==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==1126== 
==1126== All heap blocks were freed -- no leaks are possible
==1126== 
==1126== For counts of detected and suppressed errors, rerun with: -v
==1126== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1130== Memcheck, a memory error detector
==1130== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1130== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1130== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1130== 
==1130== 
==1130== HEAP SUMMARY:
==1130==     in use at exit: 0 bytes in 0 blocks
==1130==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==1130== 
==1130== All heap blocks were freed -- no leaks are possible
==1130== 
==1130== For counts of detected and suppressed errors, rerun with: -v
==1130== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1132== Memcheck, a memory error detector
==1132== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1132== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1132== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==1132== 
==1132== 
==1132== HEAP SUMMARY:
==1132==     in use at exit: 0 bytes in 0 blocks
==1132==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==1132== 
==1132== All heap blocks were freed -- no leaks are possible
==1132== 
==1132== For counts of detected and suppressed errors, rerun with: -v
==1132== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1134== Memcheck, a memory error detector
==1134== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1134== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1134== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1134== 
==1134== 
==1134== HEAP SUMMARY:
==1134==     in use at exit: 0 bytes in 0 blocks
==1134==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==1134== 
==1134== All heap blocks were freed -- no leaks are possible
==1134== 
==1134== For counts of detected and suppressed errors, rerun with: -v
==1134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1136== Memcheck, a memory error detector
==1136== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1136== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1136== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==1136== 
==1136== 
==1136== HEAP SUMMARY:
==1136==     in use at exit: 0 bytes in 0 blocks
==1136==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==1136== 
==1136== All heap blocks were freed -- no leaks are possible
==1136== 
==1136== For counts of detected and suppressed errors, rerun with: -v
==1136== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1138== Memcheck, a memory error detector
==1138== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1138== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1138== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==1138== 
==1138== 
==1138== HEAP SUMMARY:
==1138==     in use at exit: 0 bytes in 0 blocks
==1138==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==1138== 
==1138== All heap blocks were freed -- no leaks are possible
==1138== 
==1138== For counts of detected and suppressed errors, rerun with: -v
==1138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==1141== Memcheck, a memory error detector
==1141== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1141== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1141== Command: ./test -r xml "List::reverse\ edge\ cases"
==1141== 
==1141== 
==1141== HEAP SUMMARY:
==1141==     in use at exit: 0 bytes in 0 blocks
==1141==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==1141== 
==1141== All heap blocks were freed -- no leaks are possible
==1141== 
==1141== For counts of detected and suppressed errors, rerun with: -v
==1141== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
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
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==1170== Memcheck, a memory error detector
==1170== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1170== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1170== Command: ./test -r xml "List::insert\ contents\ #2"
==1170== 
==1170== 
==1170== HEAP SUMMARY:
==1170==     in use at exit: 0 bytes in 0 blocks
==1170==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==1170== 
==1170== All heap blocks were freed -- no leaks are possible
==1170== 
==1170== For counts of detected and suppressed errors, rerun with: -v
==1170== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1175== Memcheck, a memory error detector
==1175== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1175== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1175== Command: ./test -r xml "List::split\ edge\ cases"
==1175== 
==1175== 
==1175== HEAP SUMMARY:
==1175==     in use at exit: 0 bytes in 0 blocks
==1175==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==1175== 
==1175== All heap blocks were freed -- no leaks are possible
==1175== 
==1175== For counts of detected and suppressed errors, rerun with: -v
==1175== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1185== Memcheck, a memory error detector
==1185== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==1185== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==1185== Command: ./test -r xml "List::waterfall\ simple"
==1185== 
==1185== 
==1185== HEAP SUMMARY:
==1185==     in use at exit: 0 bytes in 0 blocks
==1185==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==1185== 
==1185== All heap blocks were freed -- no leaks are possible
==1185== 
==1185== For counts of detected and suppressed errors, rerun with: -v
==1185== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ddahiya3** using **b985ec8e1f6231111dfe7f0f1139cfc267b9596d** (from **October 3rd 2019, 12:15:00 am**)
