#include <stdlib.h>
#include <unistd.h>
char **split(char *str)									// Will split the str. check split v3.1
{
	int i = 0;
	int j = 0;
	int index_d = 0;
	char **dest = malloc(sizeof(char *) * 256);
	if (dest == NULL)
		return NULL;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		j = 0;
		dest[index_d] = malloc(sizeof(char*) * 4096);
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			dest[index_d][j] = str[i];
			i++;
			j++;
		}
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		index_d++;	
	}
	dest[index_d] = NULL;
	return (dest);
}

void print_str(char *str) 								// will print any given str.
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		char **dest = split(av[1]);
		int i = 0;
		int dest_count = 0;

		while (dest[dest_count])						// will get the length of dest[i] (amunt of strings)
			dest_count++;
		while(dest_count > 0)							// will print it in decreasent order.
		{
			print_str(dest[dest_count-1]);
			if (dest_count != 1)						// If we reach the last word don't print an space after the word
				write(1, " ", 1);
			dest_count--;
		}
	}
	write(1, "\n", 1);									// whatever the input and the end of he process always print à '\n'

	return (0);
}