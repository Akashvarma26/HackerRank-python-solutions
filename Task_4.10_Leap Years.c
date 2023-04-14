#include<stdio.h>
#include<string.h>
#include<stdlib.h>	
int main()
{
    int i,t;
    int arr[20];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        if(arr[i]%4==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
