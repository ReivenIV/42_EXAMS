// source : https://github.com/jraleman/42.Exam-C/blob/master/level04/ft_split.c

/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*   Created: 2017/03/31 15:13:49 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/31 15:14:03 by jaleman          ###   ########.fr       */

#include <stdlib.h>

char		**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}

//   ---------------------
//   ::  test it dear   :: 
//   ---------------------

#include <stdio.h>
int main(void)
{
    char src[] = "Hello world this is a test";
    char **dest = ft_split(src);
    int i = 0;

    while (dest[i])
    {
        printf("dest[%d]: %s\n", i, dest[i]);
        i++;
    }
    return 0;
}
