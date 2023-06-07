#include <stdio.h>

int main()
{
    int a,b,sum=0;
    printf("Enter the starting number:\n");
    scanf("%d",&a);
    printf("Enter the ending number:\n");
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        sum=sum+i; 
    }
    printf("%d\n",sum);
    return 0;
}
