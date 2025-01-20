// source : unknown

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac != 2)
    { 
        write(1, "\n", 1);
        return (0);
    }
    if (ac == 2)
    {
        int i;
        int flag;
    
        i = 0;
        flag = 0;
        // if there are spaces before the sentence we don't take count of them. 
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        // We will loop till the end of the string
        while (av[1][i] != '\0')
        {
            // if av[1][i] is a space or tab, flag = 1. Is going to be usefull in the future. 
            if (av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            // if current av[1][i] is NOT a ' ' or tab.
            if (!(av[1][i] == ' ' || av[1][i] == '\t'))
            {
                // we check status of flag if 1 we print '   '.
                // REMINDER: the flag = 1 is not the current av[1][i]
                if (flag == 1)
                {
                    write(1, "   ", 3);
                    flag = 0; // we reset flag to 0. 
                }
                // we print current av[1][i] (because we know is not a " " nor a tab)
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}