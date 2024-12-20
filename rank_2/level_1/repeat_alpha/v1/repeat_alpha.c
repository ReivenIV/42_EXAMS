/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:50:51 by rita              #+#    #+#             */
/*   Updated: 2024/12/20 12:43:42 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	multiplier;
	int	printed_amount;

	// if we have only 2 argument do
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			multiplier = 1;
			// we add +1. ex: "D" (D(68) - A(65) = 3) but D its 4 its the same to all the other letter
			if (argv[1][i] >= 'a' && argv[1][i] <='z')
				multiplier = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <='Z')
				multiplier = argv[1][i] - 'A' + 1;
			printed_amount = 0;
			while (printed_amount < multiplier)
			{
				write(1, &argv[1][i], 1);
				printed_amount++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}