## Subject

```
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
```
---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)
These algorithme is just a converter from base16 numbers to decimal (base10 = 0123456789) numbers. If you don't undersand what it means you can have fun with these converter : 

- https://www.translatorscafe.com/unit-converter/en-US/numbers/3-19/decimal-base-16/
- - you will need to chose from decimal to base16 and then come to the code here (with you base16 number) and then test/check if the base16 converted is your number. 
Exemple: 
- I have my number: 1000000 = F4240
- i test and in the terminal i see 1000000 so its working. 

good luck tiger!! 