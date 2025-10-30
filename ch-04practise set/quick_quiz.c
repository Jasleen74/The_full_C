#include<stdio.h>
int main() {
     int n ;
     printf("Put the number until which u wnat to print the natural numbers : ");
     scanf("%d",&n);

     for(int i=1; i<=n;i++ )
     {
       printf("%d \n",i);
     }
  
 return 0;
}