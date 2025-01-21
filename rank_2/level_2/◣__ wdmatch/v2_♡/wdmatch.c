// src: unknown

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    
    if (ac == 3)
    {
        j = 0;
        i = 0;
        while (av[2][j])                    // will loop until the end of av[2]
        {
            if (av[1][i] == av[2][j])
                i++;                        // if they are the same, av[1][i++]
            j++;
        }
        if (av[1][i] == '\0')               // when the loop finished on av[2] & if av[1] reached the end. 
        {
            i = 0;
            while(av[1][i])
            {
                write(1, &av[1][i], 1);     // We print it all. 
                i++;
            }
        }
    }
    write(1, "\n", 1);                      // don't forget the \n
    return(0);
}
