#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int 	main(int argc, char **argv)
{
	ft_putnbr_base(atoi(argv[argc - 2]), argv[argc - 1]);
	return 0;
}
