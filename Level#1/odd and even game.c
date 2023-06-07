#include <stdio.h>

int main()
{
    int a,sum=0,mul=1;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%2==0){
      for (int i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    }
    else{
         for (int i=1;i<=a;i++){
        mul=mul*i; 
    }
    printf("%d",mul);
    }
    return 0;
}
