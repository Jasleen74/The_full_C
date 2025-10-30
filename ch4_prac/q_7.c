//Write a program to calculate the factorial of a given number using a for loop
#include<stdio.h>
int main() {
     int i ;
     int fac =1;
     int n ;
     printf("Put the num u want the factorial for : ");
     scanf("%d",&n);

     for(i=1;i<=n;i++){
         fac = fac*i;

     }
     printf("the factorial is %d",fac); 
 return 0;
}