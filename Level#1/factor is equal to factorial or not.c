#include <stdio.h>

int main()
{
    int a,sum=0,mul=1;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for (int i=1;i<a;i++){
        if(a%i==0)
        sum=sum+i;
    }
    for (int i=1;i<=a;i++){
        mul=mul*i; 
    }
    if(sum==mul)
    printf("equal");
    else
    printf("not equal");
    return 0;
}
