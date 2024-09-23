#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
pid_t p=fork();
if(p<0){
printf("fork faild");
}if(p==0){
printf("i am a child process with id:%d",getpid());
printf("my parent process id:%d",getppid());
}else(p>0);{
printf("i am a parent process with id:%d",getpid());
printf("my child process is:%d",getpid());
}
}
