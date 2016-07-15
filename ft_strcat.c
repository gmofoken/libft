/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:00:09 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 14:00:28 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	while (*s1)
	{
		s1++;
	}
	while (*s2)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return (s1);
}