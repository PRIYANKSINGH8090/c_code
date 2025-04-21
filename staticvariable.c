#include <stdio.h>
int func1(int b1){
static int myvar= 0;
printf("the value of myvar is %d\n",myvar);
myvar++;
return b1+myvar;
}
int main(){
  int b=344;
// printf("%d\n",&b);
int val=func1(b);
val=func1(b);
val=func1(b);
val=func1(b);
val=func1(b);
val=func1(b);
int*ptr=&val;
printf("%d\n",&b);
  return 0;
}