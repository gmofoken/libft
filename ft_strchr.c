/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:08:55 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 14:09:18 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ch;

	ch = c;
	while (*s != ch)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (char *)s;
}
