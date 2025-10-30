#include<stdio.h>
int main() {
     for (int i = 1; i<15; i ++)
     {
        if (i==7){  
            break; // exit the loop now!
        }
        
        printf("value of i is %d \n",i);

     }
  
 return 0;
}