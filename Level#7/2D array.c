#include<stdio.h>    
int main()    
{
    int a,b;
    printf("Enter the row and colum:");
    scanf("%d %d",&a,&b);
    int x[a][b];
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d ",&x[i][j]);
        }
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
}
