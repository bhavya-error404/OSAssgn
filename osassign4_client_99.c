#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    printf(" %d ",i);
    
    return 0;
}