#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,r,i=0;
    scanf("%d",&n);
    char s[10];
    while(n>0)
    {
        r=65+(n-1)%26;
        n=(n-1)/26; 
        s[i]=r;
        i++;
    }
    s[i]='\0';
    for(int i=strlen(s)-1;i>=0;i--)
    {
        printf("%c",s[i]);   
    }
    return 0;
}
