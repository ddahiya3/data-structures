


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
==6388== Memcheck, a memory error detector
==6388== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6388== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6388== Command: ./test -r xml "List::insertFront\ size"
==6388== 
==6388== 
==6388== HEAP SUMMARY:
==6388==     in use at exit: 0 bytes in 0 blocks
==6388==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==6388== 
==6388== All heap blocks were freed -- no leaks are possible
==6388== 
==6388== For counts of detected and suppressed errors, rerun with: -v
==6388== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6396== Memcheck, a memory error detector
==6396== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6396== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6396== Command: ./test -r xml "List::insertBack\ size"
==6396== 
==6396== 
==6396== HEAP SUMMARY:
==6396==     in use at exit: 0 bytes in 0 blocks
==6396==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==6396== 
==6396== All heap blocks were freed -- no leaks are possible
==6396== 
==6396== For counts of detected and suppressed errors, rerun with: -v
==6396== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6400== Memcheck, a memory error detector
==6400== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6400== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6400== Command: ./test -r xml "List::insert\ contents"
==6400== 
==6400== 
==6400== HEAP SUMMARY:
==6400==     in use at exit: 0 bytes in 0 blocks
==6400==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==6400== 
==6400== All heap blocks were freed -- no leaks are possible
==6400== 
==6400== For counts of detected and suppressed errors, rerun with: -v
==6400== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6405== Memcheck, a memory error detector
==6405== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6405== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6405== Command: ./test -r xml "List::split\ simple"
==6405== 
==6405== 
==6405== HEAP SUMMARY:
==6405==     in use at exit: 0 bytes in 0 blocks
==6405==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==6405== 
==6405== All heap blocks were freed -- no leaks are possible
==6405== 
==6405== For counts of detected and suppressed errors, rerun with: -v
==6405== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6408== Memcheck, a memory error detector
==6408== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6408== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6408== Command: ./test -r xml "List::_destroy\ empty\ list"
==6408== 
==6408== 
==6408== HEAP SUMMARY:
==6408==     in use at exit: 0 bytes in 0 blocks
==6408==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==6408== 
==6408== All heap blocks were freed -- no leaks are possible
==6408== 
==6408== For counts of detected and suppressed errors, rerun with: -v
==6408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6410== Memcheck, a memory error detector
==6410== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6410== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6410== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==6410== 
==6410== 
==6410== HEAP SUMMARY:
==6410==     in use at exit: 0 bytes in 0 blocks
==6410==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==6410== 
==6410== All heap blocks were freed -- no leaks are possible
==6410== 
==6410== For counts of detected and suppressed errors, rerun with: -v
==6410== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6412== Memcheck, a memory error detector
==6412== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6412== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6412== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==6412== 
==6412== 
==6412== HEAP SUMMARY:
==6412==     in use at exit: 0 bytes in 0 blocks
==6412==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==6412== 
==6412== All heap blocks were freed -- no leaks are possible
==6412== 
==6412== For counts of detected and suppressed errors, rerun with: -v
==6412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6414== Memcheck, a memory error detector
==6414== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6414== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6414== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==6414== 
==6414== 
==6414== HEAP SUMMARY:
==6414==     in use at exit: 0 bytes in 0 blocks
==6414==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==6414== 
==6414== All heap blocks were freed -- no leaks are possible
==6414== 
==6414== For counts of detected and suppressed errors, rerun with: -v
==6414== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6439== Memcheck, a memory error detector
==6439== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6439== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6439== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6439== 
==6439== 
==6439== HEAP SUMMARY:
==6439==     in use at exit: 0 bytes in 0 blocks
==6439==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==6439== 
==6439== All heap blocks were freed -- no leaks are possible
==6439== 
==6439== For counts of detected and suppressed errors, rerun with: -v
==6439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6443== Memcheck, a memory error detector
==6443== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6443== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6443== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==6443== 
==6443== 
==6443== HEAP SUMMARY:
==6443==     in use at exit: 0 bytes in 0 blocks
==6443==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==6443== 
==6443== All heap blocks were freed -- no leaks are possible
==6443== 
==6443== For counts of detected and suppressed errors, rerun with: -v
==6443== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6447== Memcheck, a memory error detector
==6447== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6447== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6447== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6447== 
==6447== 
==6447== HEAP SUMMARY:
==6447==     in use at exit: 0 bytes in 0 blocks
==6447==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==6447== 
==6447== All heap blocks were freed -- no leaks are possible
==6447== 
==6447== For counts of detected and suppressed errors, rerun with: -v
==6447== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6450== Memcheck, a memory error detector
==6450== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6450== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6450== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==6450== 
==6450== 
==6450== HEAP SUMMARY:
==6450==     in use at exit: 0 bytes in 0 blocks
==6450==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==6450== 
==6450== All heap blocks were freed -- no leaks are possible
==6450== 
==6450== For counts of detected and suppressed errors, rerun with: -v
==6450== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6454== Memcheck, a memory error detector
==6454== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6454== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6454== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==6454== 
==6454== 
==6454== HEAP SUMMARY:
==6454==     in use at exit: 0 bytes in 0 blocks
==6454==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==6454== 
==6454== All heap blocks were freed -- no leaks are possible
==6454== 
==6454== For counts of detected and suppressed errors, rerun with: -v
==6454== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6460== Memcheck, a memory error detector
==6460== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6460== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6460== Command: ./test -r xml "List::reverse\ edge\ cases"
==6460== 
==6460== 
==6460== HEAP SUMMARY:
==6460==     in use at exit: 0 bytes in 0 blocks
==6460==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==6460== 
==6460== All heap blocks were freed -- no leaks are possible
==6460== 
==6460== For counts of detected and suppressed errors, rerun with: -v
==6460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6468== Memcheck, a memory error detector
==6468== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6468== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6468== Command: ./test -r xml "List::insert\ contents\ #2"
==6468== 
==6468== 
==6468== HEAP SUMMARY:
==6468==     in use at exit: 0 bytes in 0 blocks
==6468==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==6468== 
==6468== All heap blocks were freed -- no leaks are possible
==6468== 
==6468== For counts of detected and suppressed errors, rerun with: -v
==6468== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6472== Memcheck, a memory error detector
==6472== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6472== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6472== Command: ./test -r xml "List::split\ edge\ cases"
==6472== 
==6472== 
==6472== HEAP SUMMARY:
==6472==     in use at exit: 0 bytes in 0 blocks
==6472==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==6472== 
==6472== All heap blocks were freed -- no leaks are possible
==6472== 
==6472== For counts of detected and suppressed errors, rerun with: -v
==6472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6476== Memcheck, a memory error detector
==6476== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==6476== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==6476== Command: ./test -r xml "List::waterfall\ simple"
==6476== 
==6476== 
==6476== HEAP SUMMARY:
==6476==     in use at exit: 0 bytes in 0 blocks
==6476==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==6476== 
==6476== All heap blocks were freed -- no leaks are possible
==6476== 
==6476== For counts of detected and suppressed errors, rerun with: -v
==6476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
