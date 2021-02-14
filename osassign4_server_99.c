#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
    int i,child = fork();
    if(child==0){
    printf(" child_id = %d parent_id = %d \n",getpid(),getppid());
    int status = system("ps");
    char *args[] = {"./clientprogram", NULL};
    execv(args[0],args);
    }
    wait(NULL);
    return 0;
}