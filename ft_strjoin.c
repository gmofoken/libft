/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:26:05 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/12 09:58:08 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*fresh;

	fresh = (char*)malloc(sizeof(s1) + sizeof(s2));
	fresh = (char*)s1;
	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		fresh[i] = s2[j];
		i++;
		j++;
	}
	fresh[i] = '\0';
	return (fresh);
}
