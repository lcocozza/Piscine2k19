#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[20] = "bite";
	char src[] = " du cul";
	char dest2[20] = "bite";
	char src2[] = " du cul";

	printf("%s\n", ft_strncat(dest, src, 15));
	printf("%s\n", strncat(dest2, src2, 15));
	return 0;
}
