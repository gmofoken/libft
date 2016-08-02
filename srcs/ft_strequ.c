/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:17:52 by gmofoken          #+#    #+#             */
/*   Updated: 2016/07/28 12:26:51 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	int		b;

	i = 0;
	b = 1;
	while (s1[i] && s2[i] && b != 0)
	{
		if (s1[i] != s2[2])
			b = 0;
		i++;
	}	
	return (b);
}
