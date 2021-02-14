# OSAssgn
This repo contains solution for some Operating System questions suited for Linux.
For each question there are more than one files. One is **.c file of the code** and other is **.txt file which demonstrate an example output**.\
The format of files is osassgn**X**_ 99.c/txt where x is the number assigned to the question. \

#### To compile a c file perform this command
> gcc osassign1_99.c -o abc
Here abc is the name of executable file
#### To run 
> ./abc

### osassign1_99
Install linux and write a C program for insertion sort using gcc.\
Explore the linux commands, gcc compiler.\
After writing the Insertion Sort Code. Compile it using 
> gcc osassign1_99.c -o osassign1

After this you'll get an executable file the the name osassign1
Run this using 
> ./osassign1 

### osassign2_99
Write a C program to check process ids of the program and the parent of  
the program process 
1. Use system command to execute ps command to get all the processes 
under the current user system (“ps”) 
2. Use getpid() and getppid() to get the program process and parent 
process ids 
Check if the program process id and parent process ids are listed in the 
ps command. 

### osassign3_99
Write a program to create two pipes for two way communication. Fork a child process and exchange the following messages between parent and child. \
Child --- Parent Mesg1: Please give content of file test.txt  \
Parent reads the file name and checks it is valid and reads the content. \
Parent --Child  Mesg2:  Contents of the file \
Child --Parent: Mesg3 Exit \
Parent must wait for the child to exit. \
Parent exits after getting message and signal from the wait signal call. \

### osassign4_99
i) Write a program to fork a child process using fork() command. Child process must execute ps system call and display its process id and parent process id. 
ii) Write two programs serverprogram.c and clientprogram.c and compile them separately as serverprogram and clientprogram respectively. 

Clientprogram.c must print the n numbers \
Serverprogram.c must fork a child process which should execute the clientprogram using exec command. \
To compile the serverprogram (osassign4_server_99.c)
> gcc osassign4_server_99.c -o serverprogram
To compile the clientprogram (osassign4_client_99.c)
> gcc osassign4_client_99.c -o clientprogram
run using
> ./serverprogram
