#include <stdio.h>
#include <math.h> 
int main()
{
    int a,k=0,sum=0,mul=1;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(a!=0){
        k=a%10;
        sum=sum+k;
        mul=mul*k;
        a=a/10;
    }
    if(sum==mul)
    printf("perfect number");
    else
    printf("not perfect number");
    return 0;
}
