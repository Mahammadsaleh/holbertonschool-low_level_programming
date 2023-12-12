#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
 
int main(void)
{
    int fd[2];
    char buf1[12] = "hello world";
    char buf2[12];

    fd[0] = open("foobar.txt", O_RDWR | O_CREAT);
    fd[1] = open("foobar.txt", O_RDWR);
     
   printf("%d", fd[0]);
  printf("%d", fd[1]); 
    write(fd[0], buf1, strlen(buf1));
    write(0, buf2, read(fd[1], buf2, 12));
    close(fd[0]);
    close(fd[1]);
 
    return 0;
}
