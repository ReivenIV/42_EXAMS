#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// should we print the char ?
int should_print (char *list, char lego_block, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if(list[i] == lego_block)
        // FALSE :: we should not print.
            return (0);
        i++;
    }
    // TRUE :: yes print it. 
    return (1);
}

// check the README to understand why list/bucket. 
void ft_inter (char *list, char *bucket)
{
    int i;
    int j;
    int is_found;

    i = 0;
    while (list[i] != '\0')
    {
        j = 0;
        is_found = 0; // <- in every loop we restart the flag = 0;
        while (bucket[j] != '\0')
        {
            if (list[i] == bucket[j] && is_found == 0)
            {
                if(should_print(list, list[i], i) == 1)
                {
                    write(1, &list[i], 1);
                    is_found = 1; // if all satements are trusty we rise the flag = 1; 
                }
            }
            j++;
        }
        i++;
    }
}


int main(int ac, char **av)
{
    if(ac == 3)
        ft_inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}

/*
    these version is using a flag (is_found) to manage the printing and not printing of the second loop
    in a performance perspective is not efficient because it will stop looping til bucket[j] is finish
    and because we don t know if break is allowed for the exam here is a "lega" understandable version.
*/ 