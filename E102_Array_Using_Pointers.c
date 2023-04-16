#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
	int i, N, sum = 0;
	scanf("%d", &N);
	int *arr = (int*) malloc(_); //allocate memory to a new int pointer
	for (i = 0; i < N; i++) scanf("%d", (arr + i));//can also write &arr[i];
	for (i = 0; i < N; i++) sum += *(arr + i); //can also write arr[i];
	printf("%d", sum);
	return 0;
}
