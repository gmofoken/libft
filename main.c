#include <stdio.h>
#include <string.h>
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

	printf("ft_memset..............................................\n\n");
	char s[] = "HELL NO TO THE YES";;
	ft_putendl_fd(memset(s, 0, 6), 1);
	ft_putendl_fd(ft_memset(s, 0, 6), 1);


	printf("ft_bzero..............................................\n\n");
	char sa[] = "KJGKJS";
	ft_putendl(sa);
	ft_bzero(sa, 5);
	ft_putendl(sa);

	printf("\nft_toupper ..............................\n\n");

	ft_putchar(ft_toupper('b'));


	printf("\n\nft_tolower..........................................\n\n");
	ft_putchar(ft_tolower('X'));


	printf("\n\nft_isalpha..............................................\n\n");
	if (ft_isalpha(12) == 0)
		ft_putchar('K');
	else 
		ft_putchar('F');

	printf("\n\nft_isdigit..........................................\n\n");
	if (ft_isdigit(12) == 0)
		ft_putchar('K');
	else 
		ft_putchar('F');
	
	printf("\n\nft_isalnum..........................................\n\n");
	if (ft_isalnum(4) == 1 || ft_isalnum('D') == 1)
		ft_putnbr(1);
	else 
		ft_putnbr(0);

	printf("\n\nft_strequ..........................................\n\n");
	if (ft_strequ("SHOULD", "SHOULD") == 1)
		ft_putstr("FAILURE");
	else 
		ft_putendl("WORKS");

	printf("\n\nft_strnequ..........................................\n\n");
	if (ft_strnequ("SHOULD", "SHULD", 1) == 0)
		ft_putstr("FAILURE");
	else 
		ft_putendl("WORKS");
	
	printf("\n\nft_strequ..........................................\n\n");
	ft_putendl(ft_strsub("BUT IM A LIAR", 4, 9));

	printf("\n\nft_strjoin..........................................\n\n");
	ft_putendl(ft_strjoin("JOIN", "ME ON MY JOURNEY TO THE END OF THE WORLD"));

	
	printf("\n\nft_strnew..........................................\n\n");
	char *sn;
	//char *ns;

	//sn = ft_strnew(5);
	sn = "ABCDEFGFS";
	ft_putendl(sn);

	printf("\n\nft_strtrim..........................................\n\n");
	/*char *trim;

	trim = "	  ABCDEF 	\n	";
	ft_putendl(ft_strtrim(trim));*/

	
	printf("\n\nft_strrev..........................................\n\n");
	ft_putendl(ft_strrev("OLLEH"));
	
	printf("\n\nft_strrev..........................................\n\n");
	ft_putendl(ft_itoa(-6527613));
}
