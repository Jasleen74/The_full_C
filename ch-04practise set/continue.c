#include<stdio.h>
int main() {
     for (int i = 1; i<15; i ++)
     {
        if (i==7){
            continue;; // skip this iteration now!
        }
        
        printf("value of i is %d \n",i);

     }
  
 return 0;
}