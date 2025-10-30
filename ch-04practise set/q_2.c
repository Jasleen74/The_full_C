#include<stdio.h>
int main() {
     int n1=0;
     int n2=1;
     int next;
     int total = 8;

     for (int i =3;i<= total;i++)
     { next =n1+n2;
        printf("%d\n",next);
        n1=n2;
        n2 =next;
     }

  
 return 0;
}