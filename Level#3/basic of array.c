#include<stdio.h>    
int main()    
{
    int n;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    printf("\nthe %dth:",i);
    printf("%d",a[i]);
    }
}
