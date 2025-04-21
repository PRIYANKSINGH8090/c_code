#include<stdio.h>

int sum(int x,int y); 


int main(){
 int a,b;
 printf("enter the value of a");
scanf("%d",&a);
 
 printf("enter the value of b");
 scanf("%d",&b);

 int s = sum(a,b);
 printf("the sum is %d",s);
return 0;

}
int sum(int a,int b)

{
   
    return a+b;
}

  

   

