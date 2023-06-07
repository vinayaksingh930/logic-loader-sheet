#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the starting number:\n");
    scanf("%d",&a);
    printf("Enter the ending number:\n");
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        if(i%2==0)   
        printf("%d\n",i);
    }
    return 0;
}
