/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:12:07 by gmofoken          #+#    #+#             */
/*   Updated: 2016/08/01 12:16:11 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void		ft_putnbr_fd(int n, int fd);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void		ft_putstr(char *s);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
size_t		ft_strlen(const char *s);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_strclr(char *s);
void		*ft_memset(void *s, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
char		ft_toupper(char c);
char		ft_tolower(char c);
int			ft_isalpha(char c);
int			ft_isdigit(char c);
int			ft_isalnum(char c);
int			ft_isprint(char c);
int			ft_isacsii(char c);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
char		*ft_strtrim(char const *s);
char		*ft_strrev(char *s);
char		*ft_itoa(int n);

#endif
