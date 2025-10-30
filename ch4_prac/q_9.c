//Write a program to check whether a given number is prime or not using for loop
#include<stdio.h>
int main() {
     int n ;int prime =1;
     printf("Put the num  : ");
     scanf("%d",&n);

     int i;
     // First we will check the factors of the number
     for (i=2;i<n;i++)
     {
        if (n%i==0){
            prime=0; // here we are using the for loop just for repeated divison of the number by the others.
        }
    }
      if(prime==1){
        printf("the number %d is prime",n);
    }
        else{
            printf("the number %d is not prime",n);
        }

  
 return 0;
}