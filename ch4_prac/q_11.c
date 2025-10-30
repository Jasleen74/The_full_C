////Write a program to check whether a given number is prime or not using  while loop
#include<stdio.h>
int main() {
     int n;int prime =1;
     printf("Enter the num : ");
     scanf("%d",&n);
      if(n==0 || n==1)
      {
        prime = 0;
     }
     else
     { int i=2;
        while(i<n){
            if(n %i == 0 && n != 2){
                prime =0;
                break;
            }
            i ++;
        }
    if(prime){
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime ",n);
        }
     
    }
  
 return 0;
}