// source : unknown

#include <unistd.h>

// Check if character 'c' has already appeared before 'index' in the string 'str'.
int should_print(char *str, char c, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (0); // Character found before, return false.
        i++;
    }
    return (1); // Character not found before, return true.
}

void ft_union(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    // Print characters from s1 without duplicates
    while (s1[i])
    {
        if (should_print(s1, s1[i], i))
            write(1, &s1[i], 1);
        i++;
    }

    j = 0;
    // Print characters from s2 if they haven't been printed already from s1
    while (s2[j])
    {
        // Check if the character hasn't already appeared in s2 and s1
        if (should_print(s2, s2[j], j) == 1 && should_print(s1, s2[j], i) == 1)
            write(1, &s2[j], 1);
        j++;
    }  
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1); // Always end with a newline
    return (0);
}