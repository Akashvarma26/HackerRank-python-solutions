#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	while (num > 0)
	{
		if (num % 2 == 1) 
        goto label;//write the goto statement here to skip to the end
		printf("%d ", num);
		num = num/2;
	}
	label : printf("Process Complete");
	return 0;
}
