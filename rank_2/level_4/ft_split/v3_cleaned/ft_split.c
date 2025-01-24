// reference v3. 

#include <stdlib.h>

char		**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	char	**dest;

	if (!(dest = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(dest[k] = (char *)malloc(sizeof(char) * 5000)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			dest[k][j] = str[i];
			j++;
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		dest[k][j] = '\0';
		k++;
	}
	dest[k] = NULL;
	return (dest);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------

#include <stdio.h>
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
