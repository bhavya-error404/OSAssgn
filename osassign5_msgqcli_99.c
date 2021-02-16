#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msg_buff{
    long msg_type;
    int x;
    int arr[100];
    int size;
} m;

int main()
{
    key_t key;
    int msgid;
    key = ftok("progfile",65);
    msgid = msgget(key,0666|IPC_CREAT);
    m.msg_type = 2; 
    printf("Enter a number : "); 
    scanf("%d",&m.x); 
    msgsnd(msgid, &m, sizeof(m), 0); 
    msgrcv(msgid, &m, sizeof(m),2,0);
    printf("Received Binary Format : ");
    for(int i=100-m.size;i<100;i++)
    printf("%d",m.arr[i]);
    return 0; 
}