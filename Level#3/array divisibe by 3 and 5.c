#include<stdio.h>    
int main()    
{
    int n,sum=0;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%3==0 && a[i]%5==0){
            printf("\nthe %dth:",i);
            printf("%d",a[i]);
            
        }
    }
}
