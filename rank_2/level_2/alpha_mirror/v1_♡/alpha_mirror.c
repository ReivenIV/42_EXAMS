// source unknown

#include <unistd.h>

/*
	ex 'A' : ('A' + 'Z') - 'A' = 90 = 'Z' 
	ex 'Z' : ('A' + 'Z') - 'Z' = 65 = 'A' 
	ex 'B' : ('A' + 'Z') - 'B' = 65 = 'Y' 
*/

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = ('A' + 'Z') - argv[1][i];
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'a')
				argv[1][i] = ('a' + 'z') - argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);	
}
