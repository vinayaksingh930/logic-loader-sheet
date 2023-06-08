#include <stdio.h>

int main() {
   int a,b, i, flag,sum=0;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &a, &b);
   while (a < b) {
      flag = 0;
      if (a <= 1) {
         ++a;
         continue;
      }
      for (i = 2; i <= a / 2; ++i) {

         if (a % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0){
         printf("%d ", a);
         sum=sum+a;
      }
      ++a;
   }
   printf("%d",sum);

   return 0;
}
