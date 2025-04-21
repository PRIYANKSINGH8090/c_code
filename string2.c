#include <stdio.h>
#include <string.h>
int main(){
   char s1[]="harry";

   char s2[]="ravi";
   char s3[52];
// use of strlen
  printf("the value of s1 is%d\n",strlen(s1));
  printf("the value of s2 is%d\n",strlen(s2));

// use of strcal
puts(strcat(s2,s1));
// use of strrev
puts(strrev(s1));
strcpy(s3,strcat(s2,s1));
puts(s3);
    return 0;
}