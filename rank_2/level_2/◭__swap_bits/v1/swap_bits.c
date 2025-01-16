// source ::: me with GPT4o
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 21:01:37 by fwuensch          #+#    #+#             */
/*   Updated: 2021/07/02 16:27:22 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
    // Shift the bits to the right by 4 positions
    unsigned char right_shifted = octet >> 4;
    
    // Shift the bits to the left by 4 positions
    unsigned char left_shifted = octet << 4;
    
    // Combine the results using the OR operator
    unsigned char res = right_shifted | left_shifted;
    
    // Return the result
    return res;
}

/*
exemple : 
octet = 178;                        // 1011-0010 in binary

right_shifted = octet >> 4;         // 0000-1011 in binary
left_shifted = octet << 4;          // 0010-0000 in binary

res = right_shifted | left_shifted; // 0010-1011 in binary
*/