## Subject

```
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

<!--* PERSONAL REMINDER: the output is "padinto" and not "padinton" because it already found 1 "n" and it doesn't need to count the second one, good luck tiger -->
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$

$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
```

---

# Explanation explanation with legos: 

## Two Buckets of LEGO Blocks:

Imagine you have two buckets of LEGO blocks. Each bucket represents a string.
- Bucket 1: The first string.
- Bucket 2: The second string.

## Find Common Blocks:
- You need to find the LEGO blocks that are present in both buckets.
- Only consider the blocks that appear in both buckets.
