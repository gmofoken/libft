/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 13:10:46 by gmofoken          #+#    #+#             */
/*   Updated: 2016/07/28 13:49:00 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	//str = (char *)malloc(sizeof(char) * len);
	str = ft_memalloc(sizeof(char) * len);
	while (s[start] && i <= len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	if (str == NULL)
		return (NULL);
	return (str);
}
