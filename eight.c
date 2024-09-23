#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("before execvp()\n");
printf("creating another process using fork()\n");
pid_t p=fork();
int status=0;
if(p==0)
{
int status= execvp(cmnd,arg_list);
if(status==-1)
{
printf("incorrect termination\n");
exit(0);
}
}
else
{
printf("parent process\n");
printf("status: %d\n",status);
printf("now this line will be executed\n");
}
}
