#include <unistd.h>

// source : no idea.
// I think these one has a mistake Test it.

int	main(int ac, char **av)
{
    int	i = 0;
    int	space = 0;
    int	start;
    int	end;

    if (ac > 1 && av[1][0]) 
    {	
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        start = i;                                                                                          // first char of first word founded
        while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
            i++;
        end = i;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            while ((av[1][i] == ' ' && av[1][i + 1] == ' ') || (av[1][i] == '\t' && av[1][i + 1] == '\t')) // Skip multiple spaces or tabs
                i++;
            if (av[1][i] == ' ' || av[1][i] == '\t') 														// Set space flag if a space or tab is found
                space = 1;
            write(1, &av[1][i], 1); 																		// Print the current character
            i++;
        }
        if (space) 																							// Print a space before the first word if there were other words
            write(1, " ", 1);
        while (start < end)																					// Print the first word at the end
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}