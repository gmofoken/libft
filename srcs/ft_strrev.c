#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*str;
	int	i;
	int	j;

	if (!(str = ft_memalloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (j >= 0)
	{
		str[i] = s[j];
		i++;
		j--;
	}
	str[i] = '\0';
	return (str);
}
