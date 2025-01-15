#include <unistd.h>

void	print_last_word(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;

    // Step 1: Find the end of the string
    while (str[i])
        i++;

    // Step 2: Move backwards to find the end of the last word
    while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
        i--;

    end = i;

    // Step 3: Move backwards to find the start of the last word
    while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
        i--;

    start = i;

    // Step 4: Print the last word
    while (start < end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

int	main(int argc, char **argv)
{
    if (argc == 2)
        print_last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}