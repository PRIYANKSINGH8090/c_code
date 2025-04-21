#include<stdio.h>
int main(){
void swap(int *a,int *b);

int a=5,b=3;
swap(&a,&b);
printf("a=%d\nb=%d\n",a,b);
return 0;
}
void swap(int *a,int *b){    
    int t=*a;
    *a=*b;
    *b=t;
}
