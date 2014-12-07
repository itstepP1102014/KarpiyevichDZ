#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numb,nn;
    int sum=1,i=0;
    printf("Please, enter number of digits ");
    scanf("\n%d",&numb);
    while(numb--){
        i++;
        printf("Please, enter numb%d =",i);
        scanf("%d",&nn);
        sum=sum*nn;
        }
    printf("Reply =%d",sum);
    return 0;
}
