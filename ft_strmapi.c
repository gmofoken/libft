/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:30:36 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 14:32:25 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*pt;
	unsigned int	i;

	i = 0;
	pt = ft_strdup(s);
	while (pt[i])
	{
		pt[i] = f(i, pt[i]);
		i++;
	}
	return (pt);
}
