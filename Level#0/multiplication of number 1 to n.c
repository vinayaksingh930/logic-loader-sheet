#include <stdio.h>

int main()
{
    int n,mul=1;
    printf("Enter the starting number:\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        mul=mul*i; 
    }
    printf("%d\n",mul);
    return 0;
}
