/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 16:43:29 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/28 11:31:35 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		len;

	len = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[len])
	{
		len = 0;
		while (haystack[len] == needle[len])
			if (!needle[++len])
				return ((char *)haystack);
		haystack++;
	}
	return (0);
}
