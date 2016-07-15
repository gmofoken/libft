/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 09:16:23 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 16:18:28 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;

	s = (char *)malloc(ft_strlen(str) + 1);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, str);
	return (s);
}
