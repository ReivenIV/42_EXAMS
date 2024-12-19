/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:36:27 by rita              #+#    #+#             */
/*   Updated: 2024/12/19 15:50:11 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
$> ./first_word "FOR PONY" | cat -e
FOR$
*/

int main (int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        // if there are spaces or tabs i++
        while (argv[1][i] == 9 || argv[1][i] == 32)
            i++;
        // loop till the end of till an space or a tab    
        while (argv[1][i] != '\0' && (argv[1][i] == 9 || argv[1][i] == 32))
        {
            // while looping print every caracter
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    // at the end of all the loops add a new line
    write(1, "\n", 1);
}