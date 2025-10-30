//Write a program to calculate the factorial of a given number using a while loop
#include<stdio.h>
int main() {
     int i =1 ;
     int fac =1;
     int n ;
     printf("Put the num u want the factorial for : ");
     scanf("%d",&n);

     while(i<=n){
        fac =fac*i;
        i ++ ;
     }
     printf("the factorial is %d",fac); 
 return 0;
}