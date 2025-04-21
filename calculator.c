#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int b;
    char *operation;
    int num1;
    int num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    printf("%s\n", operation);
    printf("%d\n", num1);
    printf("%d\n", num2);
  if (strcmp(operation,"add")==0)
  {
printf("%d",num1+num2);
  }
    else if (strcmp(operation,"sub")==0)
  {
printf("%d",num1-num2);
  }
   else  if (strcmp(operation,"mult")==0)
  {
printf("%d",num1*num2);
  } 
    else {
printf("%d",num1/num2);
  } 
    return 0;
}
