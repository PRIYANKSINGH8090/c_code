// #include <stdio.h>
// int func1(int a,int b){
// auto int sum;
// sum=a+b;
//     return sum ;
//     printf("%d",sum);

// }

// int main() {
// printf("%d\n",(func1(4,5)));
//     int sum= func1(3,5);
//     printf("%d\n",sum);
//     return 0;

// }




// new code for this topic

// global variable declaration

#include <stdio.h>

int sum=2 ;
int func1(int a,int b){
auto int sum;
sum=a+b;
    return sum ;

}

int main() {
    printf("%d\n",sum);
    return 0;

}