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
			word_count++; 																// <-- count amount of words in the string
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	dest = malloc((word_count + 1) * sizeof(char *));									// <-- array string malloc +1 dont forget the the null string at the end. 
	i = 0;																				// reset of i
	
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))			// search begining of the word
			i++;
		start = i;	
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))			// search end of the word
			i++;
		end = i;
		if (end > start)
		{
			dest[dest_index] = malloc(sizeof(char) * ((end - start) + 1));				// create each string
			ft_strncpy(dest[dest_index], &str[start], end - start);						// put data in empty string
			dest_index++;
		}
	}
	dest[dest_index] = NULL;															// add a NULL string to the end of the array of strings 
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
