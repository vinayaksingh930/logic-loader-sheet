#include<stdio.h>    
int main()    
{    
 int n1=-1,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);
 for(i=0;i<number;++i)   
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }
