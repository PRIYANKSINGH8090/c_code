#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
char arr[100];
char arr2[100];
gets(arr);
gets(arr2);
int b=strlen(arr);
int c=strlen(arr2);
for (int i = 0; i < b; i++)
{
    arr[i]=tolower(arr[i]);

}
for (int i = 0; i < b; i++)
{
    arr2[i]=tolower(arr2[i]);
    
}
printf("%d",strcmp(arr,arr2));


    


return 0;

}