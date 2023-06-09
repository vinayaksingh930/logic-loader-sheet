#include<stdio.h>    
int main()    
{
    int a,b,sum=0;
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
    for (int i=0;i<a;i++){
        sum=0;
        for (int j=0;j<b;j++){
            sum=sum+x[j][i];
        }
        printf("sum of %d column is:%d\n",i,sum);
    }
}
