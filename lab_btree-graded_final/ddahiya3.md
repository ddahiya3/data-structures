


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
==17729== Memcheck, a memory error detector
==17729== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17729== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17729== Command: ./test -r xml "test_btree3_small"
==17729== 
==17729== 
==17729== HEAP SUMMARY:
==17729==     in use at exit: 0 bytes in 0 blocks
==17729==   total heap usage: 1,796 allocs, 1,796 frees, 226,792 bytes allocated
==17729== 
==17729== All heap blocks were freed -- no leaks are possible
==17729== 
==17729== For counts of detected and suppressed errors, rerun with: -v
==17729== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17755== Memcheck, a memory error detector
==17755== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17755== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17755== Command: ./test -r xml "test_btree128_med_rand"
==17755== 
==17755== 
==17755== HEAP SUMMARY:
==17755==     in use at exit: 0 bytes in 0 blocks
==17755==   total heap usage: 2,641 allocs, 2,641 frees, 1,579,584 bytes allocated
==17755== 
==17755== All heap blocks were freed -- no leaks are possible
==17755== 
==17755== For counts of detected and suppressed errors, rerun with: -v
==17755== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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





### ✓ - [5/5] - test_btree12_double

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **ddahiya3** using **cbf61ac33e6032d8fe44972b470ff64ecb503da3** (from **October 28th 2019, 12:15:00 am**)
