/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:18:47 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 14:22:51 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *s1, char *s2)
{
	int		str;
	int		str2;

	str = 0;
	str2 = 0;
	if (!s2[0])
		return ((char *)(s1));
	while (s1[str])
	{
		if (s1[str] == s2[str2])
			str2++;
		else
		{
			str -= str2;
			str2 = 0;
		}
		if (!s2[str2])
			return ((char *)(s1 + str - str2 + 1));
		str++;
	}
	return (NULL);
}
