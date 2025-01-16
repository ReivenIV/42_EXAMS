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
---------------------------------
---------------------------------
---------------------------------
---------------------------------

# Personal notes: (non subjet part)

# Explanation explanation with legos: 

## One list and one bucket of LEGO Blocks:

### Imagine that you have a list(ac2) and a bucket(ac3) of legos.
- ac[2] list 1: The first string. It's the list of legos that could be present in the bucket
- ac[3] Bucket 2: The second string. Is the buckets where are the actual legos and you need to check if what are inside. 

## Find :
- Imagine that you have a list(ac2) and a bucket of legos 
- You need to find the lego blocks that are present in the list. 
- Only take/print the blocks that appear in the list.
	- if you have 10 blue in the bucket : take/print 1
	- if you have 20 red in the list : take/1
	- if there are 15 green in the bucket but non in the list : you don't take/print the green ones. 
	- if in the list is asking for orange ones and they are none in the bucket : you don't take/print the orange ones.
