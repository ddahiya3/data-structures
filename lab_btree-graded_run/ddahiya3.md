


## Score: 55/55 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_small

- **Points**: 5 / 5

```
==23762== Memcheck, a memory error detector
==23762== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23762== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23762== Command: ./test -r xml "test_btree3_small"
==23762== 
==23762== 
==23762== HEAP SUMMARY:
==23762==     in use at exit: 0 bytes in 0 blocks
==23762==   total heap usage: 1,798 allocs, 1,798 frees, 227,168 bytes allocated
==23762== 
==23762== All heap blocks were freed -- no leaks are possible
==23762== 
==23762== For counts of detected and suppressed errors, rerun with: -v
==23762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree128_med_rand

- **Points**: 5 / 5

```
==23768== Memcheck, a memory error detector
==23768== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23768== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23768== Command: ./test -r xml "test_btree128_med_rand"
==23768== 
==23768== 
==23768== HEAP SUMMARY:
==23768==     in use at exit: 0 bytes in 0 blocks
==23768==   total heap usage: 2,643 allocs, 2,643 frees, 1,579,960 bytes allocated
==23768== 
==23768== All heap blocks were freed -- no leaks are possible
==23768== 
==23768== For counts of detected and suppressed errors, rerun with: -v
==23768== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="147">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="20001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="20001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree256_med_rand

- **Points**: 5 / 5

```
==23770== Memcheck, a memory error detector
==23770== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23770== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==23770== Command: ./test -r xml "test_btree256_med_rand"
==23770== 
==23770== 
==23770== HEAP SUMMARY:
==23770==     in use at exit: 0 bytes in 0 blocks
==23770==   total heap usage: 2,669 allocs, 2,669 frees, 3,411,056 bytes allocated
==23770== 
==23770== All heap blocks were freed -- no leaks are possible
==23770== 
==23770== For counts of detected and suppressed errors, rerun with: -v
==23770== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree256_med_rand" tags="[timeout=8000][valgrind][weight=5]" filename="tests/tests.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="40001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="40001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree12_double

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **ddahiya3** using **cbf61ac33e6032d8fe44972b470ff64ecb503da3** (from **October 28th 2019, 12:15:00 am**)
