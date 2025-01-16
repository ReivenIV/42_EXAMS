/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:50:47 by rita              #+#    #+#             */
/*   Updated: 2025/01/16 20:28:59 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
	You will need : 
		ft_atoi
			- form: res = res * 10 + (str[i] - '0');
		print_hex:
			- refs base 16 : char *digits = "0123456789abcdef";
			- recursive : if( n > 16) {print_hex(n / 16);}
*/

int	ft_atoi(char *str)
{
	int i;
	int power;
	int res;

	power = 1;
	i = 0;
	res = 0;
	if (str[i] == '-')
	{
		power = power * -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * power);
}
void print_hex(int n)
{
	char *digits = "0123456789abcdef";

	if (n > 16)
		print_hex(n / 16);
	write(1, &digits[n % 16], 1);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}