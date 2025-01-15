/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:37:27 by rita              #+#    #+#             */
/*   Updated: 2025/01/15 17:37:35 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb)
{
	char c;
	if(nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	// REMINDER: -1 because a.out count as 1 and we don't need to count that one in the output. 
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}