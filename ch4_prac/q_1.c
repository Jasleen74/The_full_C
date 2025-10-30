//. Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main() {
     int n ;
     printf("put the value of n :");
     scanf("%d",&n);

     int multiply;
     int i ;

     for( i=1; i<=10;i++)
     {
        multiply =i*n;
        printf("%d\n",multiply) ;
     }

  
 return 0;
}