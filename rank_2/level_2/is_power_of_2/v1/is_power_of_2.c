/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:56:07 by rita              #+#    #+#             */
/*   Updated: 2024/12/22 19:56:07 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return (0);
}
#include <stdio.h>
int main(void)
{
    unsigned int test_cases[] = {0, 1, 2, 3, 4, 8, 16, 31, 32, 64, 127, 128, 255, 256, 1023, 1024};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++)
    {
        unsigned int n = test_cases[i];
        printf("is_power_of_2(%u) = %d\n", n, is_power_of_2(n));
    }

    return 0;
}