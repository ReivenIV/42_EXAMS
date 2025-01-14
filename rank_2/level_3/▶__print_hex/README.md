## Subject

```
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
```

---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)

## TODO: 
```
	You will need : 
		ft_atoi
			- form: res = res * 10 + (str[i] - '0');
		print_hex:
			- refs base 16 : char *digits = "0123456789abcdef";
			- recursive : if( n > 16) {print_hex(n / 16);}
```