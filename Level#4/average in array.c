#include<stdio.h>    
int main()    
{
    int n,sum=0,avg;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    printf("Average:%d",avg);
}
