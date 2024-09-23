#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
pid_t p=fork();
if(p<0){
printf("fork fail");
exit(1);
}
printf("hello all,my process is :%d",getpid());
}
