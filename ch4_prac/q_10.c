//Write a program to check whether a given number is prime or not using do while loop
#include<stdio.h>
int main() {
     
     int n ;
     int i =2;
     int prime =1;
      printf("Enter the num : ");
      scanf("%d",&n);

      if(n<=1){
        prime=0;
      }
      
    if(n>1){
      do {
        if(n%i==0 && n!=2){
            prime=0;
            break;
            }
       i++;
        }while(i<n);
      }
        if (prime){
            printf("the num %d is prime",n);
        }
        else{
            printf("the num %d is not prime",n);
        
      }
     

  
 return 0;
}

