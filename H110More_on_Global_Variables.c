#include <stdio.h>

int var1, var2, sum;
void input()
{	//input the values for  var1 and var2 here
    scanf("%d %d",&var1,&var2);
}
void compute()
{	//store the addition of var1 and var2 in variable sum here
    sum=var1+var2;
}
void print()
{	//Print the variable sum here
    printf("%d",sum);
}
int main()
{
	input();
	compute();
	print();
	return 0;
}
