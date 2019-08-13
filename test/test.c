#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>


int	main()
{
	int fd;
	int rd;
	char buff[100000];

	if ((fd = open("input_map.txt", O_WRONLY | O_CREAT, 0644)) == -1)
		return (-1);
	while ((rd = read(STDIN_FILENO, buff, 100000)))
		write(fd, buff, rd);
	close(fd);
	return 0;
}
