
#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_strclr(char *s);

#endif
