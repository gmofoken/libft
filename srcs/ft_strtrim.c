/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 13:37:35 by gmofoken          #+#    #+#             */
/*   Updated: 2016/07/30 15:40:24 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_traverse(char const *s, int *b, int *e)
{
	int		i;
	int		bo;
	
	i = 0;
	b = 0;
	while (s[i] && bo != 1)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
			bo = 1;
		ft_putchar(s[i]);
	}
	*b = i;
	i = ft_strlen(s) - 1;
	bo = 0;
	while (i != 0 && bo != 1)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i--;
		else
			bo = 1;
		ft_putchar(s[i]);
	}
	*e = i;	
}

char	*ft_strtrim(char const *s)
{ 
	int		i;
	int 	b;
	int		e;
	char	*str;

	i = 0;
	b = 0;
	e = 0;
	ft_traverse(s, &b, &e);
	str = ft_memalloc(sizeof(char) * ((e - b)) + 1 );
	while (b <= e)
	{
		 str[i] = s[b];
		 b++;
		 i++;
	}
	str[i] = '\0';
	return (str);
}
