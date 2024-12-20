/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:46:06 by rita              #+#    #+#             */
/*   Updated: 2024/12/20 14:46:06 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// *	REMINDER these exercice is almost the same as rot_1

/*
explanataion : 
		In these exercice we move the chars of 1 case. 
		argv[1][i] = (argv[1][i] - 'a' + 1) % 26 + 'a';

>> ""(argv[1][i] - 'a' + 1)"" :
	- we found the position of the asked rot (1). 
ex[D] = ('D' - 'A' + 1) = 16 = (68 - 65 + 1)
ex[Z] = ('Z' - 'A' + 1) = 35 = (68 - 65 + 1)

>> ""(n) % 26 + 'A'"" :
	- "modulo 26" : is because ascii AZ = 26 so if a number depase 26 we will found the rest and their position in the begining of the table
	- "n + 'A'" : the magical letter to transform the ints we are manipulating into chars. 
ex[D] = 16 % 26 = 16 + 'A' = 'Q'
ex[Z] = 35 % 26 = 12 + 'A' = 'M'
*/
int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <='z') 
				argv[1][i] = (argv[1][i] - 'a' + 1) % 26 + 'a';
			if (argv[1][i] >= 'A' && argv[1][i] <='Z') 
				argv[1][i] = (argv[1][i] - 'A' + 1) % 26 + 'A';        
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}