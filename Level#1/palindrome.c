#include <stdio.h>

int main()
{
    int a,k=0,rev=0,b;
    printf("Enter the number:\n");
    scanf("%d",&a);
    b=a;
    while(a!=0){
        k=a%10;
        rev=rev*10+k;
        a=a/10;
    }
    if(b==rev)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}
