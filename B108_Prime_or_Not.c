#include <stdio.h>
#include<math.h>
int main()
{
    int number, is_prime, i;
    scanf("%d", &number);
    is_prime=1;
    if(number==1){
        printf("no");
    }
    else{
    for(i=2;i*i<number;i++){
        if(number%i==0){
            is_prime=0;
            break;
        }
    }
    if (is_prime == 1) printf("yes");
    if (is_prime == 0) printf("no");
    }
    return 0;
}
