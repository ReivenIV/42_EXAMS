/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:31:31 by rita              #+#    #+#             */
/*   Updated: 2024/12/22 12:31:31 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// i did it these way just to practice. check the v2 its totally a better
// quicker way of doing these excercice

// REMINDER : check in the subjet you are allow to use atoi & printf

int	ft_atoi(char *src_n)
{
	int	i;
	int power;
	int res;

	i = 0;
	power = 1;
	res = 0;

	while (src_n[i] == ' ' || (src_n[i] >= 9 && src_n[i] <= 13))
		i++;
	if (src_n[i] == '-')
	{
		power = power * (-1);
		i++;
	}
	while (src_n[i] >= '0' && src_n[i] <= '9')
	{
		res = res * 10 + (src_n[i] - '0');
		i++;
	}
	return (res * power); 
}

void	ft_putnbr(int n)
{
	int c;

	if (n < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	int v1;
	int v3;
	int vq;
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
		if (argv[2][0] == '-')
		{
			v1 = ft_atoi(argv[1]);
			v3 = ft_atoi(argv[3]);
			vq = v1 - v3;
			ft_putnbr(vq);
		}
		if (argv[2][0] == '*')
			ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
		if (argv[2][0] == '/')
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	}
	write(1, "\n", 1);
	return (0);
}