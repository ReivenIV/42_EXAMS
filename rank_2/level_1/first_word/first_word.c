// source unknown
#include <unistd.h>

/*
$> ./first_word "FOR PONY" | cat -e
FOR$
*/

// REMINDER : check last_word is almost the same (level_3/last_word)

int main (int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        // if there are spaces or tabs i++
        while (argv[1][i] == '\t' || argv[1][i] == ' ')
            i++;
        // loop till the end of till an space or a tab    
        while (argv[1][i] != '\0' && (argv[1][i] == '\t' || argv[1][i] == ' '))
        {
            // while looping print every caracter
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}