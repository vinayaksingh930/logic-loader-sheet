#include<stdio.h>    
int main()    
{
    int a,b,sum=0,sum1=0,flag=0;
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
            if(i==j && x[i][j]!=1){
                flag=1;
                break;
            }
            if(i!=j && x[i][j]!=0){
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    printf("Not identy matxix");
    else
    printf("Identy matxix");
}
