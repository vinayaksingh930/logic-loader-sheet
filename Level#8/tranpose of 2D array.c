#include<stdio.h>    
int main()    
{
    int a,b,temp=0;
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
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d",x[j][i]);
        }
        printf("\n");
    }
}
