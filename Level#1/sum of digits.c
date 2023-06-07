#include <stdio.h>

int main()
{
    int a,k=0,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(a!=0){
        k=a%10;
        sum=sum+k;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}
