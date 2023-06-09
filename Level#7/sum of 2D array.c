#include<stdio.h>    
int main()    
{
    int a,b,sum=0;
    printf("Enter the row and colum:");
    scanf("%d %d",&a,&b);
    int x[a][b];
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d ",&x[i][j]);
            sum+=x[i][j];
        }
    }
    printf("%d",sum);
}
