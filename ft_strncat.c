/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 11:42:49 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/28 11:12:00 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, char *restrict s2, size_t n)
{
	size_t		i;
	char		*ret;

	i = 0;
	ret = s1;
	while (*s1)
		s1++;
	while (i++ < n && *s2)
		*s1++ = *s2++;
	*s1 = 0;
	return (ret);
}
