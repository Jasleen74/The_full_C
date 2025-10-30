#include<stdio.h>
int main() {
     int i;

     do {
     printf("enter ur pwd : ");
     scanf("%d",&i);

     if (i !=1234){
            printf("re-enter the pwd \n");
        }

    }
     while(i != 1234);
        printf("the pwd is correct ");
        
     
  
 return 0;
}