/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 15:28:29 by gmofoken          #+#    #+#             */
/*   Updated: 2016/11/29 14:56:28 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	while (dst[i])
		i++;
	dst_len = i;
	while (src[src_len])
		src_len++;
	while (*src && i + 1 < size)
		dst[i++] = *src++;
	dst[i] = 0;
	return (src_len + ((dst_len > size) ? size : dst_len));
}
