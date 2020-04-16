#include<fcntl.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	int n,fd,fd1;
	char buff[30];
	fd=open("file1",O_RDONLY,0777);
	lseek(fd,-11,SEEK_END);
	n=read(fd,buff,10);
	//write(fd1,buff,n);
	write(1,buff,n);
    return 0;    
}
