


## Score: 8/8 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
Makefile:28: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m
lab_intro.cpp:137:26: warning: comparison of integers of different signs: 'unsigned int' and 'int' [-Wsign-compare]
  for (unsigned x = 0; x < x_to_consider; x++) {
                       ~ ^ ~~~~~~~~~~~~~
lab_intro.cpp:138:28: warning: comparison of integers of different signs: 'unsigned int' and 'int' [-Wsign-compare]
    for (unsigned y = 0; y < y_to_consider; y++) {
                         ~ ^ ~~~~~~~~~~~~~
2 warnings generated.

```
```
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/catch/catchmain.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic tests/tests-part1.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic tests/tests-part2.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/PNG.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/HSLAPixel.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/lodepng/lodepng.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic lab_intro.cpp
clang++ catchmain.o tests-part1.o tests-part2.o PNG.o HSLAPixel.o lodepng.o lab_intro.o -std=c++1y -stdlib=libc++ -lc++abi -lm -o test

```


### ✓ - [1/1] - HSLAPixel's default constructor creates a white pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's default constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates a pixel with provided HSL values

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSLA constructor creates a pixel with provided HSLA values

- **Points**: 1 / 1





### ✓ - [1/1] - createSpotlight

- **Points**: 1 / 1





### ✓ - [1/1] - illinify

- **Points**: 1 / 1





### ✓ - [1/1] - watermark

- **Points**: 1 / 1





---

This report was generated for **ddahiya3** using **d0128684549af33a26e8bdc058aaf90949117a5f** (from **September 2nd 2019, 12:15:00 am**)