#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
for (int i=0;i<5;i++){
pid_t child = fork();
if(child==0){
printf("child %d child_id = %d parent_id = %d \n",i+1,getpid(),getppid());
exit(0);
}
}
int status = system("ps");
return 0;
}
