#include <stdio.h>

int main()
{
    int a,k=0,rev=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(a!=0){
        k=a%10;
        rev=rev*10+k;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}
