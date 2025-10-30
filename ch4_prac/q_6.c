/*Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/
#include<stdio.h>
int main() {
     int n =8;
     int multiply;
     int i ;int sum =0;

     for( i=1; i<=10;i++)
     {
        multiply =i*n;
        sum+=multiply ;
        printf("%d X %d = %d\n",n,i,multiply);
        
     }
     printf("the sum is %d",sum);

  
 return 0;
}