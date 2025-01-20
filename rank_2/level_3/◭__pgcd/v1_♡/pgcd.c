// reference : https://github.com/AlexandreDesponds/42-Piscine-C/blob/master/Exam/ExamFinal/3-0-pgcd/rendu/pgcd.c

/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*   Created: 2015/09/26 10:46:25 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 11:01:27 by exam             ###   ########.fr       */

#include <stdio.h>
#include <stdlib.h>

void ft_pgcd(int n1, int n2)
{
	int	div;
	int pgcd;

	if (n1 <= 0 || n2 <= 0)
		return ;
	div = 1;
	while(div <= n1 || div <= n2)
	{
		if (n1 % div == 0 && n2 % div == 0)
			pgcd = div;
		div++;
	}	
	printf("%d", pgcd);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_pgcd(atoi(av[1]), atoi(av[2]));		
	printf("\n");
	return(0);
}