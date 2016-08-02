#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
		return (1);
	return (0);
}
