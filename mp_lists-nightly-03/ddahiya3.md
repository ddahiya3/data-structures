


## Score: 34/114 (29.82%)


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
==7044== Memcheck, a memory error detector
==7044== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7044== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7044== Command: ./test -r xml "List::insertFront\ size"
==7044== 
==7044== 
==7044== HEAP SUMMARY:
==7044==     in use at exit: 0 bytes in 0 blocks
==7044==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==7044== 
==7044== All heap blocks were freed -- no leaks are possible
==7044== 
==7044== For counts of detected and suppressed errors, rerun with: -v
==7044== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7048== Memcheck, a memory error detector
==7048== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7048== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7048== Command: ./test -r xml "List::insertBack\ size"
==7048== 
==7048== 
==7048== HEAP SUMMARY:
==7048==     in use at exit: 0 bytes in 0 blocks
==7048==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==7048== 
==7048== All heap blocks were freed -- no leaks are possible
==7048== 
==7048== For counts of detected and suppressed errors, rerun with: -v
==7048== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7054== Memcheck, a memory error detector
==7054== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7054== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7054== Command: ./test -r xml "List::insert\ contents"
==7054== 
==7054== 
==7054== HEAP SUMMARY:
==7054==     in use at exit: 0 bytes in 0 blocks
==7054==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==7054== 
==7054== All heap blocks were freed -- no leaks are possible
==7054== 
==7054== For counts of detected and suppressed errors, rerun with: -v
==7054== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7085== Memcheck, a memory error detector
==7085== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7085== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7085== Command: ./test -r xml "List::split\ simple"
==7085== 
==7085== 
==7085== HEAP SUMMARY:
==7085==     in use at exit: 0 bytes in 0 blocks
==7085==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==7085== 
==7085== All heap blocks were freed -- no leaks are possible
==7085== 
==7085== For counts of detected and suppressed errors, rerun with: -v
==7085== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7094== Memcheck, a memory error detector
==7094== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7094== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7094== Command: ./test -r xml "List::_destroy\ empty\ list"
==7094== 
==7094== 
==7094== HEAP SUMMARY:
==7094==     in use at exit: 0 bytes in 0 blocks
==7094==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==7094== 
==7094== All heap blocks were freed -- no leaks are possible
==7094== 
==7094== For counts of detected and suppressed errors, rerun with: -v
==7094== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7098== Memcheck, a memory error detector
==7098== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7098== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7098== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==7098== 
==7098== 
==7098== HEAP SUMMARY:
==7098==     in use at exit: 0 bytes in 0 blocks
==7098==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==7098== 
==7098== All heap blocks were freed -- no leaks are possible
==7098== 
==7098== For counts of detected and suppressed errors, rerun with: -v
==7098== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7100== Memcheck, a memory error detector
==7100== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7100== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7100== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==7100== 
==7100== 
==7100== HEAP SUMMARY:
==7100==     in use at exit: 0 bytes in 0 blocks
==7100==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==7100== 
==7100== All heap blocks were freed -- no leaks are possible
==7100== 
==7100== For counts of detected and suppressed errors, rerun with: -v
==7100== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7102== Memcheck, a memory error detector
==7102== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7102== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7102== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==7102== 
==7102== 
==7102== HEAP SUMMARY:
==7102==     in use at exit: 0 bytes in 0 blocks
==7102==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==7102== 
==7102== All heap blocks were freed -- no leaks are possible
==7102== 
==7102== For counts of detected and suppressed errors, rerun with: -v
==7102== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7104== Memcheck, a memory error detector
==7104== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7104== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7104== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7104== 
==7104== 
==7104== HEAP SUMMARY:
==7104==     in use at exit: 0 bytes in 0 blocks
==7104==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==7104== 
==7104== All heap blocks were freed -- no leaks are possible
==7104== 
==7104== For counts of detected and suppressed errors, rerun with: -v
==7104== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7106== Memcheck, a memory error detector
==7106== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7106== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7106== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==7106== 
==7106== 
==7106== HEAP SUMMARY:
==7106==     in use at exit: 0 bytes in 0 blocks
==7106==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==7106== 
==7106== All heap blocks were freed -- no leaks are possible
==7106== 
==7106== For counts of detected and suppressed errors, rerun with: -v
==7106== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7108== Memcheck, a memory error detector
==7108== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7108== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7108== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7108== 
==7108== 
==7108== HEAP SUMMARY:
==7108==     in use at exit: 0 bytes in 0 blocks
==7108==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==7108== 
==7108== All heap blocks were freed -- no leaks are possible
==7108== 
==7108== For counts of detected and suppressed errors, rerun with: -v
==7108== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7133== Memcheck, a memory error detector
==7133== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7133== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7133== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==7133== 
==7133== 
==7133== HEAP SUMMARY:
==7133==     in use at exit: 0 bytes in 0 blocks
==7133==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==7133== 
==7133== All heap blocks were freed -- no leaks are possible
==7133== 
==7133== For counts of detected and suppressed errors, rerun with: -v
==7133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7138== Memcheck, a memory error detector
==7138== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7138== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7138== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==7138== 
==7138== 
==7138== HEAP SUMMARY:
==7138==     in use at exit: 0 bytes in 0 blocks
==7138==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==7138== 
==7138== All heap blocks were freed -- no leaks are possible
==7138== 
==7138== For counts of detected and suppressed errors, rerun with: -v
==7138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7149== Memcheck, a memory error detector
==7149== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7149== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7149== Command: ./test -r xml "List::reverse\ edge\ cases"
==7149== 
==7149== 
==7149== HEAP SUMMARY:
==7149==     in use at exit: 0 bytes in 0 blocks
==7149==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==7149== 
==7149== All heap blocks were freed -- no leaks are possible
==7149== 
==7149== For counts of detected and suppressed errors, rerun with: -v
==7149== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==7187== Memcheck, a memory error detector
==7187== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==7187== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==7187== Command: ./test -r xml "List::insert\ contents\ #2"
==7187== 
==7187== 
==7187== HEAP SUMMARY:
==7187==     in use at exit: 0 bytes in 0 blocks
==7187==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==7187== 
==7187== All heap blocks were freed -- no leaks are possible
==7187== 
==7187== For counts of detected and suppressed errors, rerun with: -v
==7187== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
