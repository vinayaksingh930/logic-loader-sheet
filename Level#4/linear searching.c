#include<stdio.h>    
int main()    
{
    int n,sum=0,ele,k;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be serched:");
    scanf("%d",&ele);
    for (int i=0;i<n;i++){
        if(a[i]==ele){
            k=i+1;
            break;
        }
    }
    printf("The pogition is: %d",k);
}
