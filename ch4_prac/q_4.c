//Write a program to sum first ten natural numbers using  using do while loop
#include<stdio.h>
int main() {
     int i =1;int sum = 0;
      do { 
        sum+=i;
        i ++ ;
    }while (i<=10);
    printf("the sum is %d",sum);

  
 return 0;
}