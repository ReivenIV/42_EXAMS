/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rita <rita@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:02:32 by rita              #+#    #+#             */
/*   Updated: 2024/12/19 16:44:29 by rita             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
3 = 'fizz'
5 = 'buzz'
3 & 5 = 'fizzbuzz'
*/

void    ft_putnbr(int n)
{
    char    c;

    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(void)
{
    // check the exemple its start by 1 and not 0.
    int i = 1;
    
    while (1 <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else 
            ft_putnbr(i);
        i++;
    }
    return (0);
}