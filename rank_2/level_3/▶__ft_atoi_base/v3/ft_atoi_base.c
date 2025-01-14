// source : https://github.com/cgrasser-42-Projects/libft/blob/main/src/ft_atoi_base.c
// REMINDER : These exercice is from a libft of a 42 student and not from an exam exemple repo 

# include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
	strchr
	DESCRIPTION :
	The ft_strchr function searches for the first occurrence of the character c
	in the string s. If the character is found, it returns a pointer to that
	occurrence in the string. If the character is not found, it returns NULL.

	RETURN VALUE :
	It returns a pointer to the first occurrence of the character c in the
	string s, or NULL if the character is not found.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			break ;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

int	ft_get_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			break ;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sgn;
	int	to_return;
	int	size_base;

	i = 0;
	sgn = 1;
	to_return = 0;
	size_base = ft_strlen(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn *= -1;
		i++;
	}
	while (ft_strchr(base, str[i]) && str[i])
	{
		to_return = to_return * size_base + ft_get_index_base(str[i], base);
		i++;
	}
	return (to_return * sgn);
}