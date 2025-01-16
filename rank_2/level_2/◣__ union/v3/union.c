/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:16:32 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/12/22 20:52:34 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	should_print(char *str, char c, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		if (should_print(str1, str1[i], i))
		{
			write(1, &str1[i], 1);
		}
		i++;
	}
	while (str2[j] != '\0')
	{
		if(should_print(str1, str2[j], i) && should_print(str2, str2[j], j))
		{
			write(1, &str2[j], 1);
		}
		j++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\0", 1);
		return (0);
	}
	ft_union(argv[1], argv[2]);
	return (0);
}