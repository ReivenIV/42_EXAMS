## Subject

```
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
```
---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)
in these exemple we see : 
- $>./add_prime_sum 7 | cat -e
- output : 17$

### meaning 
- The program calculates the sum of all prime numbers less than or equal to 7.
- Prime numbers less than or equal to **7** are: **2, 3, 5, 7**.
- **Sum** = 2 + 3 + 5 + 7 = 17.
- output = **17**

## exemple for 13:
- Prime numbers less than or equal to **13** are: **2, 3, 5, 7, 11, 13**.
- **sum** = 2 + 3 + 5 + 7 + 11 + 13 = 41.
- output = **41**.
