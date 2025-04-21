#include <stdio.h>
int func1(int a,int b){
extern int sum;  //isko use karne se wo samjh jaiega ki wo global use karna chahte h
// auto int sum;
// sum=a+b;
    return sum ;
    printf("%d",sum);
 
}
int sum =98;
int main() {
printf("%d\n",(func1(4,5)));
    int sum= func1(3,5);
    printf("%d\n",sum);
    return 0;

}


