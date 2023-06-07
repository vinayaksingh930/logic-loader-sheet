#include <stdio.h>

int main()
{
    int a,b,mul=1;
    printf("Enter the starting number:\n");
    scanf("%d",&a);
    printf("Enter the ending number:\n");
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        mul=mul*i; 
    }
    printf("%d\n",mul);
    return 0;
}
