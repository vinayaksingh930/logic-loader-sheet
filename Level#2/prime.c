#include <stdio.h>
#include <math.h> 
int main()
{
    int a,k=0,sum=0,mul=1;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0)
        k++;
    }
    if(k>0)
    printf("not prime number");
    else
    printf("prime number");
    return 0;
}
