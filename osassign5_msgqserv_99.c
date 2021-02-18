#include <stdio.h> 
#include <sys/ipc.h> 
#include <sys/msg.h> 
  
struct msg_buff{ 
    long msg_type; 
    int x;
    int arr[100];
    int size;
} m; 

int dectobin(int a)
{
    int j=99,i=0;
    for(i=0;i<100;i++)
    m.arr[i]=0;
    m.size=0;
    while(a>0){
        m.arr[j]=a%2;
        a=a/2;
        j--;
        m.size++;
    }
    printf("Binary Format : ");
    for(i=100-m.size;i<100;i++)
    printf("%d",m.arr[i]);
    return 0;
}
int main() 
{ 
    key_t key; 
    int msgid; 
    key = ftok("progfile", 65); 
    msgid = msgget(key, 0666 | IPC_CREAT); 
    msgrcv(msgid, &m, sizeof(m),2,0);
    printf("Received number  : %d \n",m.x);
    dectobin(m.x);
    msgsnd(msgid, &m, sizeof(m), 0); 

    msgctl(msgid, IPC_RMID, NULL);
    return 0;
} 
