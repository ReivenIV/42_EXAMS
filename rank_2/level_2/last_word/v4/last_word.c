// By: galpers

/*   Created: 2022/04/06 19:03:35 by galpers           #+#    #+#             */
/*   Updated: 2022/04/06 19:19:34 by galpers          ###   ########.fr       */
/*                                                                            */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		i--;
		while ((av[1][i] == ' ' || av[1][i] == '\t') && i != 0)
			i--;	
		while (av[1][i] != ' ' && av[1][i] != '\t'  && i != 0)
			i--;
		if (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{	
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}