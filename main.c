#include "get_next_line.h"

void ft_leaks(void){
	system("leaks -q a.out");
}
int main(){
	int fd;
	char *line;
fd=open("test.txt", O_RDONLY);
line=get_next_line(fd);
while(line != NULL)
{
	printf("%s", line);
	free(line);
	line=get_next_line(fd);
}
printf("%s", line);
atexit(ft_leaks);
}
