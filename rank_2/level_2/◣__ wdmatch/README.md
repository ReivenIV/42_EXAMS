## Subject

```
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:
$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
```

---
---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)
# Explanation explanation with legos: 
To understand the idea check union and inter explanations. These one has the same approach. 

You have a list with a certain order and a bucket of legos. 
If the the legos in the bucket are in the order asked in the list then print. 

Some more examples 
$>./wdmatch "faya" "aayyaaff" | cat -e
$
$>./wdmatch "faya" "fffyyaaa" | cat -e
$
$>./wdmatch "faya" "yyyaaafff" | cat -e
$
$>./wdmatch "faya" "fffaaayyyaaa" | cat -e
faya$
$>./wdmatch "faya" "fXXaXXyXXaXXa" | cat -e
faya$