/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:55:36 by rita              #+#    #+#             */
/*   Updated: 2024/12/20 12:55:36 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char    *rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i > 0)
	{
		while (i > 0)
		{
			write (1, &str[i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (str);
}

// int main(void)
// {
//   rev_print("Hello world");
//   write (1, "\n", 1);
//   rev_print("tnirp esreveR");
//   write (1, "\n", 1);
//   rev_print("");
//   write (1, "\n", 1);
// }