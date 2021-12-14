#include<stdio.h>
#include <unistd.h>
 #include <sys/types.h>
 #include <sys/stat.h>
#include <fcntl.h>

int main (int argc,char const *argv[])
{
pid_t id;
unsigned char buff[20];
pipe (fd);
//fd[0]=read
//fd[1]=write
id=fork();
if(0==id)

{
    printf ("Child reading data\n");
    write(fd[1],buff,sizeof(buff));
    printf("Length is%d:"buff);
    close (fd);
    return 0;

}
else{
fdr=open("dictionary.txt", O_RDONLY);
(fd[1],buff,sizeof(buff)
    printf ()
    read (fd[0],buff,sizeof(buff));
    printf("Data is%s\n",buff);
    close (fd);
    return 0;

}

