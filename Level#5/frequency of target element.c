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
    printf("Enter the targated element:");
    scanf("%d",&ele);
    for (int i=0;i<n;i++){
        if(a[i]==ele){
            k++;
        }
    }
    printf("The frequency of%d is: %d",ele,k);
}
