#include <stdio.h>
#include <math.h>

   void hak(int *a,int *b){
int t=*a+*b;
*b=abs(*a-*b);
   *a=t;
}
int main (){
    void hak(int *a,int *b);
    int a,b;
    printf("h");
    scanf("%d",&a);
    scanf("%d",&b);
    
    hak(&a,&b);

   printf("%d\n%d\n",a,b);
   return 0;

   }

