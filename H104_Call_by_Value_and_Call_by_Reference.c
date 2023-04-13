#include<stdio.h>
void power(int val);
int main()
{
	int val;
	scanf("%d", &val);
    power(val);
	return 0;
}
//implement the power function here
void power(int val)
{
    int num=1,i;
    for(i=1;i<=val;i++)
    {
        num*=2;
    }
    printf("%d",num);
}
