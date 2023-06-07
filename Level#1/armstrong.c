#include <stdio.h>
#include <math.h> 
int main()
{
    int a,k=0,num=0,b,count=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    b=a;
    count=log10(a)+1;
    while(a!=0){
        k=a%10;
        num=num+pow(k,count);
        a=a/10;
    }
    if(b==num)
    printf("armstrom");
    else
    printf("not armstrom");
    return 0;
}
