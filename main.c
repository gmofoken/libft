#include <stdio.h>
#include "includes/libft.h"
#define RESET		"\033[0m"
#define BOLDGREEN	"\033[1m\033[32m"
#define BOLDRED		"\033[1m\033[31m"

int	main()
{
	printf(BOLDGREEN "\n\nft_putchar.........................\n\n" RESET);
	printf("%c\n", 'X');
	ft_putchar('X');
	
	printf(BOLDGREEN "\n\nft_putnbr..........................\n\n" RESET);
	printf("%d\n", 0);
	ft_putnbr(0);
	
	printf(BOLDGREEN "\n\nft_putstr.........................\n\n" RESET);
	printf("HELLO WORLD\n");
	ft_putstr("HELLO WORLD\n");
	 
	printf(BOLDGREEN "\n\nft_putchar_fd.......................\n\n" RESET);
	
	ft_putchar_fd('W', 1);
	
	printf(BOLDGREEN "\n\nft_putnbr_fd.......................\n\n" RESET);
	
	ft_putnbr_fd(0, 1);	

	printf(BOLDRED "\n\nft_putstr_fd.......................\n\n" RESET);
	
	ft_putstr_fd(RESET "YOU AND I", 1);

	printf(BOLDGREEN "\n\nft_strlen...............\n\n" RESET);
	ft_putnbr(ft_strlen("HELLO"));

	printf(BOLDRED "\n\nft_putendl...........................\n\n" RESET);
	printf("PUTENDL WORKS\n");
	ft_putendl("PUTENDL WORKS");

	printf("\nft_putendl_fd..............................................\n\n");
	printf("PUTENDL_FD WORKS\n");
	ft_putendl_fd("PUTENDL_FD WORKS", 1);
	
	printf(BOLDGREEN "\nft_strclr.....................................\n\n" RESET);
	char sh[] = "HEllio";
	ft_strclr(sh);

	printf("ft_putchar_fd..............................................\n\n");
	printf("ft_putchar_fd..............................................\n\n");
	printf("ft_putchar_fd..............................................\n\n");
	printf("ft_putchar_fd..............................................\n\n");
}
