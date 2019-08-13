#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[20] = "test ";
	char src[] = "de chaine";
	char dest2[20] = "test ";
	char src2[] = "de chaine";

	printf("%d\n", ft_strlcat(dest, src, 0));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest2, src2, 0));
	printf("%s\n", dest2);
	return 0;
}
