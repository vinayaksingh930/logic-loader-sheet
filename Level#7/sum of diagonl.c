#include<stdio.h>    
int main()    
{
    int a,b,sum=0,sum1=0;
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
        for (int j=0;j<b;j++){
            if(i==j)
            sum=sum+x[i][j];
            if((i+j)==(b-1))
            sum1+=x[i][j];
        }
    }
    printf("The sum of primary diagnol: %d",sum);
    printf("\nThe sum of secondary diagnol: %d",sum1);
}
