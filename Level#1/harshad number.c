#include <stdio.h>
#include <math.h> 
int main()
{
    int a,k=0,sum=0,b;
    printf("Enter the number:\n");
    scanf("%d",&a);
    b=a;
    while(a!=0){
        k=a%10;
        sum=sum+k;
        a=a/10;
    }
    if(b%sum==0)
    printf("harshed number");
    else
    printf("not harshed number");
    return 0;
}
