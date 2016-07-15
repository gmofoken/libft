/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 13:01:21 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 11:07:28 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = (ft_strlen(s) - 1);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
	{
		j--;
	}
	while (i <= j)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[i] = '\0';
	return (str);
}
