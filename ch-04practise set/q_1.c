//Write a C program using a for loop to print the first 10 multiples of 4, starting from 4.
#include<stdio.h>
int main() {
     int m;
     printf("the first 10 multiples of 4 are : ");


     for (int i = 1; i<=10;i++)
     {
        m=i*4;
        printf("4 X i = %d \n",m);
     }
  
 return 0;
}