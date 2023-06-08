#include<stdio.h>    
int main()    
{
    int n,sum=0,lg;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    lg=a[0];
    for(int i=0;i<n;i++){
        if(lg<a[i])
        lg=a[i];
    }
    printf("Largest of array is:%d",lg);
}
