


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
==24356== Memcheck, a memory error detector
==24356== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24356== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24356== Command: ./test -r xml "List::insertFront\ size"
==24356== 
==24356== 
==24356== HEAP SUMMARY:
==24356==     in use at exit: 0 bytes in 0 blocks
==24356==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==24356== 
==24356== All heap blocks were freed -- no leaks are possible
==24356== 
==24356== For counts of detected and suppressed errors, rerun with: -v
==24356== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24360== Memcheck, a memory error detector
==24360== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24360== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24360== Command: ./test -r xml "List::insertBack\ size"
==24360== 
==24360== 
==24360== HEAP SUMMARY:
==24360==     in use at exit: 0 bytes in 0 blocks
==24360==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==24360== 
==24360== All heap blocks were freed -- no leaks are possible
==24360== 
==24360== For counts of detected and suppressed errors, rerun with: -v
==24360== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24364== Memcheck, a memory error detector
==24364== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24364== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24364== Command: ./test -r xml "List::insert\ contents"
==24364== 
==24364== 
==24364== HEAP SUMMARY:
==24364==     in use at exit: 0 bytes in 0 blocks
==24364==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==24364== 
==24364== All heap blocks were freed -- no leaks are possible
==24364== 
==24364== For counts of detected and suppressed errors, rerun with: -v
==24364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24371== Memcheck, a memory error detector
==24371== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24371== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24371== Command: ./test -r xml "List::split\ simple"
==24371== 
==24371== 
==24371== HEAP SUMMARY:
==24371==     in use at exit: 0 bytes in 0 blocks
==24371==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==24371== 
==24371== All heap blocks were freed -- no leaks are possible
==24371== 
==24371== For counts of detected and suppressed errors, rerun with: -v
==24371== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24376== Memcheck, a memory error detector
==24376== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24376== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24376== Command: ./test -r xml "List::_destroy\ empty\ list"
==24376== 
==24376== 
==24376== HEAP SUMMARY:
==24376==     in use at exit: 0 bytes in 0 blocks
==24376==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==24376== 
==24376== All heap blocks were freed -- no leaks are possible
==24376== 
==24376== For counts of detected and suppressed errors, rerun with: -v
==24376== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24380== Memcheck, a memory error detector
==24380== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24380== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24380== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==24380== 
==24380== 
==24380== HEAP SUMMARY:
==24380==     in use at exit: 0 bytes in 0 blocks
==24380==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==24380== 
==24380== All heap blocks were freed -- no leaks are possible
==24380== 
==24380== For counts of detected and suppressed errors, rerun with: -v
==24380== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24384== Memcheck, a memory error detector
==24384== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24384== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24384== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==24384== 
==24384== 
==24384== HEAP SUMMARY:
==24384==     in use at exit: 0 bytes in 0 blocks
==24384==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==24384== 
==24384== All heap blocks were freed -- no leaks are possible
==24384== 
==24384== For counts of detected and suppressed errors, rerun with: -v
==24384== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24388== Memcheck, a memory error detector
==24388== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24388== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24388== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==24388== 
==24388== 
==24388== HEAP SUMMARY:
==24388==     in use at exit: 0 bytes in 0 blocks
==24388==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==24388== 
==24388== All heap blocks were freed -- no leaks are possible
==24388== 
==24388== For counts of detected and suppressed errors, rerun with: -v
==24388== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24393== Memcheck, a memory error detector
==24393== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24393== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24393== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24393== 
==24393== 
==24393== HEAP SUMMARY:
==24393==     in use at exit: 0 bytes in 0 blocks
==24393==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==24393== 
==24393== All heap blocks were freed -- no leaks are possible
==24393== 
==24393== For counts of detected and suppressed errors, rerun with: -v
==24393== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24401== Memcheck, a memory error detector
==24401== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24401== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24401== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==24401== 
==24401== 
==24401== HEAP SUMMARY:
==24401==     in use at exit: 0 bytes in 0 blocks
==24401==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==24401== 
==24401== All heap blocks were freed -- no leaks are possible
==24401== 
==24401== For counts of detected and suppressed errors, rerun with: -v
==24401== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24410== Memcheck, a memory error detector
==24410== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24410== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24410== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==24410== 
==24410== 
==24410== HEAP SUMMARY:
==24410==     in use at exit: 0 bytes in 0 blocks
==24410==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==24410== 
==24410== All heap blocks were freed -- no leaks are possible
==24410== 
==24410== For counts of detected and suppressed errors, rerun with: -v
==24410== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24440== Memcheck, a memory error detector
==24440== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24440== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24440== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==24440== 
==24440== 
==24440== HEAP SUMMARY:
==24440==     in use at exit: 0 bytes in 0 blocks
==24440==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==24440== 
==24440== All heap blocks were freed -- no leaks are possible
==24440== 
==24440== For counts of detected and suppressed errors, rerun with: -v
==24440== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24446== Memcheck, a memory error detector
==24446== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24446== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24446== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==24446== 
==24446== 
==24446== HEAP SUMMARY:
==24446==     in use at exit: 0 bytes in 0 blocks
==24446==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==24446== 
==24446== All heap blocks were freed -- no leaks are possible
==24446== 
==24446== For counts of detected and suppressed errors, rerun with: -v
==24446== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24450== Memcheck, a memory error detector
==24450== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24450== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24450== Command: ./test -r xml "List::insert\ contents\ #2"
==24450== 
==24450== 
==24450== HEAP SUMMARY:
==24450==     in use at exit: 0 bytes in 0 blocks
==24450==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==24450== 
==24450== All heap blocks were freed -- no leaks are possible
==24450== 
==24450== For counts of detected and suppressed errors, rerun with: -v
==24450== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24456== Memcheck, a memory error detector
==24456== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24456== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24456== Command: ./test -r xml "List::split\ edge\ cases"
==24456== 
==24456== 
==24456== HEAP SUMMARY:
==24456==     in use at exit: 0 bytes in 0 blocks
==24456==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==24456== 
==24456== All heap blocks were freed -- no leaks are possible
==24456== 
==24456== For counts of detected and suppressed errors, rerun with: -v
==24456== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==24460== Memcheck, a memory error detector
==24460== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==24460== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==24460== Command: ./test -r xml "List::waterfall\ simple"
==24460== 
==24460== 
==24460== HEAP SUMMARY:
==24460==     in use at exit: 0 bytes in 0 blocks
==24460==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==24460== 
==24460== All heap blocks were freed -- no leaks are possible
==24460== 
==24460== For counts of detected and suppressed errors, rerun with: -v
==24460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
