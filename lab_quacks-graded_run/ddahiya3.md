


## Score: 2/14 (14.29%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==8268== Memcheck, a memory error detector
==8268== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8268== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8268== Command: ./test -r xml "sumDigits"
==8268== 
==8268== 
==8268== HEAP SUMMARY:
==8268==     in use at exit: 0 bytes in 0 blocks
==8268==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==8268== 
==8268== All heap blocks were freed -- no leaks are possible
==8268== 
==8268== For counts of detected and suppressed errors, rerun with: -v
==8268== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==8287== Memcheck, a memory error detector
==8287== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==8287== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==8287== Command: ./test -r xml "triangle"
==8287== 
==8287== 
==8287== HEAP SUMMARY:
==8287==     in use at exit: 0 bytes in 0 blocks
==8287==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==8287== 
==8287== All heap blocks were freed -- no leaks are possible
==8287== 
==8287== For counts of detected and suppressed errors, rerun with: -v
==8287== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/3] - sum

- **Points**: 0 / 3


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="78">
          <Original>
            stack&lt;double>::_CS225_ctor_count == 0
          </Original>
          <Expanded>
            1 == 0
          </Expanded>
        </Expression>
        <OverallResults successes="0" failures="1" expectedFailures="0"/>
      </Section>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="3" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/3] - isBalanced

- **Points**: 0 / 3


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <Info>
          []][[]
        </Info>
        <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="113">
          <Original>
            QuackFun::isBalanced(stringToQueue(s)) == false
          </Original>
          <Expanded>
            true == false
          </Expanded>
        </Expression>
        <OverallResults successes="4" failures="1" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="12" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="12" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/3] - scramble 17

- **Points**: 0 / 3


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <Info>
        Scrambled queue: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 
Expected:        1 3 2 4 5 6 10 9 8 7 11 12 13 14 15 17 16 

      </Info>
      <Failure filename="tests/basic.cpp" line="154">
        See output above
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/3] - scramble 9

- **Points**: 0 / 3


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <Info>
        Scrambled queue: 4 5 6 7 8 9 10 11 12 
Expected:        4 6 5 7 8 9 12 11 10 

      </Info>
      <Failure filename="tests/basic.cpp" line="182">
        See output above
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="206">
          <Original>
            verifySame(s, q)== false
          </Original>
          <Expanded>
            true == false
          </Expanded>
        </Expression>
        <OverallResults successes="0" failures="1" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ddahiya3** using **4fcea67c47e46ed0a61227db43c7381af3241ea5** (from **September 30th 2019, 12:15:00 am**)
