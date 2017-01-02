/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 16:44:27 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/28 10:34:47 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = dest;
	while (i++ < n)
	{
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = 0;
	}
	return (ret);
}
