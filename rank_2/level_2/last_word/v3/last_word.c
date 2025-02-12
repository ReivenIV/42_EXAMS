// By: vfuster

/*   Created: 2023/05/09 16:14:10 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/12 09:23:18 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		while (--i && (av[1][i] == ' ' || av[1][i] == '\t'))
			;
		while (i && av[1][i] != ' ' && av[1][i] != '\t')
			i--;
		if (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
} 
