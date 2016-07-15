/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 12:19:15 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 16:08:38 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	while (i < len)
	{
		if (*s == '\0')
			break ;
		*d++ = *s++;
		i++;
	}
	len = ft_strlen(dst);
	while (i < len)
	{
		if (*d)
			*d++ = '\0';
		i++;
	}
	return (dst);
}
