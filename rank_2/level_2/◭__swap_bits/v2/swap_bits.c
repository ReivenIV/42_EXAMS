// source ::: jcluzet <jo@cluzet.fr> 
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 21:01:37 by fwuensch          #+#    #+#             */
/*   Updated: 2021/07/02 16:27:22 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
