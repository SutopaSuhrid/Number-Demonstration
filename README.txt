Date: 09/25/2023
Class: CS4541
Assignment: Number_Demonstration
Author: Sutopa Suhrid

Command used to compile:
gcc -std=c99 -Wall -o Number_Demonstration Number_Demonstration.c

Warnings: I had a couple of warnings related to integer overflow and type format specifiers    		but that was expected due to the nature of this assignment.

Number_Demonstration.c: In function ‘main’:
Number_Demonstration.c:35:18: warning: integer overflow in expression of type ‘int’ results in ‘-1794967296’ [-Woverflow]
   35 |     num5 = 50000 * 50000;
      |                  ^
Number_Demonstration.c:37:18: warning: integer overflow in expression of type ‘int’ results in ‘-694967296’ [-Woverflow]
   37 |     num5 = 60000 * 60000;
      |                  ^
Number_Demonstration.c:39:18: warning: integer overflow in expression of type ‘int’ results in ‘605032704’ [-Woverflow]
   39 |     num5 = 70000 * 70000;
      |                  ^


References: Chapter 2 of "Computer Systems" textbook

Results:
Problem 1:
Expected: 2.5000000000
Result: 2.5000000000

Problem 2:
Expected: -0.1000000000 (or close due to floating point precision)
Result: -0.1000000015

Problem 3:
Expected (First print): 0.000000 (due to integer division)
Result: 0.000000
Expected (Second print): 0.3333333333 (or close due to double precision)
Result: 0.333333

Problem 4:
Expected (Before cast): 9999999.3399999999 (or close due to double precision)
Result: 9999999.340000
Expected (After cast to float): Approximately 9999999.34, but with potential loss of precision.
Result: 9999999.000000

Problem 5:
Expected (30000*30000): 900000000
Expected (40000*40000): 1600000000
Expected (50000*50000): 2500000000
Expected (60000*60000): 3600000000
Expected (70000*70000): 4900000000
Result 1: 900000000
Result 2: 1600000000
Result 3: -1794967296
Result 4: -694967296
Result 5: 605032704

Problem 6:
Expected (1e20): 1.000000e+20
Expected (1e20 + 3500000000): 1.000000e+20
Expected (1e20 + (3500000000 * 1000000000)): 1.000000e+29
Result after loop: 1.000000e+29
Result 1: 100000002004087734272.000000
Result 2: 100000002004087734272.000000
Result 3: 103500002601996386304.000000
Result 4: 100000002004087734272.000000 if I use "long long" but if I use "float" it keeps thinking and does not give an answer. For the assignment I used "float" so there was no answer.

