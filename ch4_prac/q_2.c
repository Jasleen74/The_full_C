//. Write a program to print multiplication table of 10 in a reversed order.
#include<stdio.h>
int main() {
     int n =10;
     

     int multiply;
     int i ;

     for( i=10; i>0;i--)
     {
        multiply =i*n;
        printf("%d\n",multiply) ;
     }

  
 return 0;
}