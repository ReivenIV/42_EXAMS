/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:30:40 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/12/22 20:50:32 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	to_print(char *str, char c, int position)
{
	int	i;

	i = 0;
	while (i < position)
	{
		if (c == str[i])
		{
			// FALSE :: we already printed.
			return (0);
		}
		i++;
	}
	// TRUE :: is not have been printed.
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i;
	int j;

	i = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				printf("a1= %c, a2= %c\n", argv[1][i], argv[2][j]);
				if(to_print(argv[1], argv[1][i], i) == 1)
				{
					write(1, &argv[1][i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}

	write (1, "\n", 1);
	return (0);
}
