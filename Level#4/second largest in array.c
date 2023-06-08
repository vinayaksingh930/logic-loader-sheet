#include<stdio.h>    
int main()    
{
    int n,sum=0,lg,slg;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(a[0] > a[1]) {
      lg = a[0];
      slg  = a[1];
   } else {
      lg = a[1];
      slg  = a[0];
   }
    for(int i=2;i<n;i++){
        if(lg<a[i]){
            slg=lg;
            lg=a[i];
        }
        else if( slg<a[i]){
            slg=a[i];
        }
    }
    printf("Second Largest of array is:%d",slg);
}
