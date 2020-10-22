#include <stdlib.h>  /*needed to define exit()*/
#include <unistd.h>  /*needed for k() and getpid()*/
#include <stdio.h> /*needed forprintf()*/
int main(int argc,char**argv)
{
int pid; /*processID*/
switch (pid=fork())
{
case 0: /*a fork return 0 to the child*/
printf(" i am the child process: pid=%d\n",getpid());
break;

default: /*a fork returns a pid to the parent*/
printf("i am the parent process: pid=%d,child pid=%d\n", getpid(),pid);
break;

case-1: /*something went wrong*/
perror("fork");
exit(1);
}
exit(0);
}
