/*   By: enzgonca <enzgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:13:51 by enzgonca          #+#    #+#             */
/*   Updated: 2024/11/12 12:42:19 by enzgonca         ###   ########.fr       */

#include <stdio.h>

static int	ft_intlen(int n)
{
	int	i;
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	long	nb;
	nb = n;
	len = ft_intlen(nb);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (nb == 0)
		dest[0] = '0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		dest [len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (dest);
}