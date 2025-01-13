/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:54:59 by rita              #+#    #+#             */
/*   Updated: 2025/01/13 17:54:59 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
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
	
		// Will jump all the first spaces otherwise will have flag=1 and the second loop will make a first space and the moulinette will respond with wrong. 
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				flag = 1;
			if(!((av[1][i] == ' ' || av[1][i] == '\t')))
			{
				if (flag == 1)
				{
					write(1, " ", 1);
					flag = 0;
				}
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
