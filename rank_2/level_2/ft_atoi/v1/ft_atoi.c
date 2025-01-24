/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:41:03 by rita              #+#    #+#             */
/*   Updated: 2024/12/22 16:41:03 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int power;
	int res;

	i = 0;
	power = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			power = power * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * power);
}
/*
#include <stdio.h>
#include <stdlib.h> 
int	main(void)
{
	// ft_atoi tests
	printf("%i\n", ft_atoi("      -777"));
	printf("%i\n", ft_atoi("      -2147483648"));
	printf("%i\n", ft_atoi("      2147483647"));
	printf("%i\n\n\n", ft_atoi("      777"));

	// atoi tests
	printf("%i\n", atoi("      -555"));  // -555
	printf("%i\n", atoi("-----555"));    // 0
	printf("%i\n", atoi("-+555"));       // 0
	printf("%i\n", atoi(" - 555"));      // 0
	printf("%i\n", atoi("++555"));       // 0
	printf("%i\n", atoi("+555"));        // 555
	printf("%i\n", atoi("555MMM"));      // 555
	printf("%i\n", atoi("M555MMM"));     // 0
	printf("%i\n", atoi("M555MMM"));     // 0
	printf("%i\n", atoi("555    "));     // 555
	printf("%i\n", atoi("555 888   "));  // 555
	printf("%i\n", atoi("-2147483648")); // INT_MIN OK
	printf("%i\n", atoi("2147483647"));  // INT_MAX OK
} 
*/