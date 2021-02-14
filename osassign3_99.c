#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(){

    int pfds[2],pfdh[2];
    char buf[100]="Please give me content of test.txt";
    char buf3[100]="Exiting";
    char buf4[100];
    pipe(pfds);
    pipe(pfdh);
    int x = fork();
    if (x==0) {
        //printf(" CHILD: writing to the pipe\n");
        write(pfds[1], buf, 100);
        read(pfdh[0],buf4,100);
        printf("Parent--Child Mesg 2 : Contents of file are  \"%s\"\n", buf4);
        write(pfds[1], buf3, 15);
        exit(0);
       
    } else {
        //printf("PARENT: reading from pipe\n");
	    FILE *fp;
	    fp = fopen("test.txt", "r");
    	if(fp == NULL){
		    printf("File Error.");
		    return 1;
    	}
        fgets(buf4,200,fp);
        read(pfds[0], buf, 100);
        printf("Child--Parent Mesg 1:  \"%s\"\n", buf);
        write(pfdh[1],buf4,100);
        read(pfds[0], buf3, 15);
        printf("Child--Parent Mesg 3: \"%s\"\n", buf3);
        wait(NULL);
    }
    return 0;
}