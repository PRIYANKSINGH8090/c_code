#include <stdio.h>
#include <stdlib.h>
int main (){
    char *id;
    int n,a;
    printf("enter no of character in your id");

    scanf("%d",&n);
    id=(char*) malloc((n+1)*sizeof(char));
for(int i=0;i<=3;i++)
{

    printf("enter the ID of employee");
    scanf("%s",id);   
    printf("enter the Ia of employee");
    scanf("%s",a);   
getchar();

        printf("the  ID  of employee is%s\n",id);
    }
    return 0;
}