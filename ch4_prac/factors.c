#include<stdio.h>
int main() {
     int n;int i;int factors=0;
    printf("enter the num : ");
     scanf("%d",&n);

     for (i=1;i<=n;i++){
        if(n % i == 0){
          printf("%d \n",i);
          factors ++;
          
        }
       
     }
   printf("this num %d have %d factors",n,factors);
 return 0;
}


