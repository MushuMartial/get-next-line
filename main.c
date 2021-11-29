#include "gnl.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char *line = "";
	int fd;
	fd = open("f.text", O_RDONLY);
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	system("leaks a.out");
	return (0);
}