#include <stdio.h>

int main()
{
    int a,k=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(a!=0){
        a=a/10;
        k++;
    }
    printf("%d",k);
    return 0;
}
