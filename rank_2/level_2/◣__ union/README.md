## Subject

```
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
```

---
---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)

# Explanation explanation with legos: 

## Two Buckets of LEGO Blocks:
Imagine you have two buckets of LEGO blocks. Each bucket represents a string.
- Bucket 1: The first string.
- Bucket 2: The second string.

## Find All Unique Blocks:
- You need to find all the LEGO blocks that are present in either of the buckets.
- Include each block only once, even if it appears multiple times in one or both buckets.