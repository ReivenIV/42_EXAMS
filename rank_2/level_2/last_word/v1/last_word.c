/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:42:24 by rita              #+#    #+#             */
/*   Updated: 2025/01/15 15:24:26 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_last_word(char *str)
{
	int start;
	int end;

	end = 0;
	// in case str is empty or null we stop de function
	if(!str || str[end] == '\0')
		return ;
		// we search for the end of str
	while (str[end] != '\0')
		end++;
	// We will search backwards from end. 
	start = end;
	// we search the beginning of the last word. 
	// REMINDER: don't forget [start-1] otherwise you will have -1 at your start later
	while(start > 0 && str[start-1] != ' ' && str[start-1] != '\t')
		start--;
		
	//We print it baby !! 
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;	
	}
	return ;	
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}