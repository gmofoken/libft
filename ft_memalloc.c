/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 11:44:45 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 07:44:27 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*pt;

	pt = (void*)malloc(size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, size);
	return (pt);
}
