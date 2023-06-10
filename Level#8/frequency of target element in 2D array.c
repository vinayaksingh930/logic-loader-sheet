#include<stdio.h>    
int main()    
{
    int a,b,k=0,ele;
    printf("Enter the row:");
    scanf("%d",&a);
    printf("Enter the colum:");
    scanf("%d",&b);
    int x[a][b];
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("Enter the %d %d element:",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("Enter the targated element:");
    scanf("%d",&ele);
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        if(x[i][j]==ele){
            k++;
        }
        }
    }
    printf("The frequency of %d is: %d",ele,k);
}
