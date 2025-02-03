#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int index_d = 0;
	char **dest = malloc(sizeof(char *) * 256);
	if (dest == NULL)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		j = 0;
		dest[index_d] = malloc(sizeof(char) * 4096);
		while(str[i] && str[i] != ' ' && str[i] != '\t')
		{
			dest[index_d][j] = str[i];
			j++;
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		index_d++;
	}
	dest[index_d] = NULL;
	return dest;
}

void	print_str(char *str)
{
	int i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char **dest = ft_split(av[1]);
		int i = 0;
		int count_d = 0;

		while (dest[i+1])
		{
			print_str(dest[i+1]);
			write(1, " ", 1);
			i++;
		}
		print_str(dest[0]);
	}
	write(1, "\n", 1);
	return (0);
}