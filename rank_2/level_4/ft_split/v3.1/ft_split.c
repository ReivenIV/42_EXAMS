// reference v3. 

#include <stdlib.h>

char		**ft_split(char *str)
{
	int		i = 0;																// index of source string
	int		j = 0;																// index of new each string in the array of strings
	int		dest_index = 0;														// dest/vector index
	char	**dest;

	dest = malloc(sizeof(char *) * 256);										// creates 256 vectors in dest**
	if (dest == NULL)					
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')					//* search for the first caracter
		i++;
	while (str[i] != '\0')
	{
		j = 0;
		dest[dest_index] = malloc(sizeof(char) * 4096);							// creates empty string of size 4096
		if (dest[dest_index] == NULL)
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])		//* loop only on caracters
		{
			dest[dest_index][j] = str[i];										// fill the empty string
			j++;
			i++;
		}
		dest[dest_index][j] = '\0';												// add NULL / '\0' at the end of the string
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')				//* search for the next word
			i++;
		dest_index++;															// next vector
	}
	dest[dest_index] = NULL;													// at the end the last vector is null
	return (dest);																// return dest 
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
