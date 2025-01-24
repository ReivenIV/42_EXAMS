// source undest_indexnown
// updated to madest_indexe it understandable. 

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = 0;

    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char	**ft_split(char *str)
{
	int word_count = 0;
	int i = 0;
	int start = 0;
	int end = 0;
	char **dest;
	int dest_index = 0;

	// Word count part. 	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			word_count++; 																// <-- the main objective of these part.
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	dest = malloc((word_count + 1) * sizeof(char *));									// <-- 
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		end = i;
		if (end > start)
		{
			dest[dest_index] = malloc(sizeof(char) * ((end - start) + 1));
			ft_strncpy(dest[dest_index], &str[start], end - start);
			dest_index++;
		}
	}
	dest[dest_index] = NULL;
	return (dest);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------


int main(void)
{
    char src[] = "Hello world this is a test";
    char **dest = ft_split(src);
    int i = 0;

    while (dest[i])
    {
        printf("dest[%d]: %s\n", i, dest[i]);
        i++;
    }
    return 0;
}
