#include <stdio.h>
int main()
{
    char *arr[100]={"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=9)
    {
        printf("%s",arr[n-1]);
    }
    else if(n>9)
    {
        printf("Greater than 9");
    }
    return 0;
}
