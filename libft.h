/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:27:05 by gmofoken          #+#    #+#             */
/*   Updated: 2016/05/15 17:05:05 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
char		*ft_strncpy(char *dst, const char *src, size_t len);
int			ft_strlen(char const *str);
char		*ft_strncat(char *s1, const char *s2, size_t n);
void		ft_putchar(char c);
int			ft_isdigit(int c);
int			ft_toupper(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
char		*ft_strchr(const char *s, int c);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strdup(const char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_putnbr(int n);
int			ft_isprint(int c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_itoa(int n);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_strclr(char *s);
char		*ft_strnew(size_t size);
char		**ft_strsplit(char const *s, char c);
void		*ft_memalloc(size_t size);
void		ft_striter(char *s, void (*f)(char *));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
char		*ft_strtrim(char const *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strstr(char *s1, char *s2);
char		*ft_strnstr(char *s1, char *s2, size_t n);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_tolower(int c);

#endif