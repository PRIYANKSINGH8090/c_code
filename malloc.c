#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int n;
    printf("enter the size ");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
 for (size_t i = 0; i < n; i++)
 {
   printf("enter the value ");//if we don't enetr the values then it will print garbage
    scanf("%d",&ptr[i]);
 }
     for (size_t i = 0; i < n; i++)
 {
    printf("the %d value of ptr is %d\n",i+1,ptr[i]);
 }
    return 0;
}