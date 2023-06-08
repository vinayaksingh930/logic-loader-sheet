#include<stdio.h>    
int main()    
{
    int a,b,k;
    printf("enter the lenght of first array:");
    scanf("%d",&a);
    
    k=a+b;
    int x[a];
    for(int i =0;i<a;i++){
        printf("enter the %d element:",i);
        scanf("%d",&x[i]);
    }
    printf("enter the lenght of second array:");
    scanf("%d",&b);
    int y[b],c[a+b];
    for(int i =0;i<b;i++){
        printf("enter the %d element:",i);
        scanf("%d",&y[i]);
    }
    for (int i=0;i<a+b;i++){
        if(i<a)
        c[i]=x[i];
        else
        c[i]=y[i-a];
    }
    for(int i =0;i<a+b;i++){
        printf("%d",c[i]);
}
}
