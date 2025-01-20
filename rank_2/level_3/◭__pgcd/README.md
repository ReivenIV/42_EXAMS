## Subject

```
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
```
---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)
## "highest common denominator"
Largest positive integer that divides each of the given numbers without leaving a remainder.
- REMINDER: you will need to use '%' and not '/' to solve these problem. 

For example, to find the pgcd of 18 and 24:
```
The factors of 18 are 1,2,3,6,9,18
The factors of 24 are 1,2,3,4,6,8,12,24
The common factors are 1,2,3,6, and the highest of these is 6.
```