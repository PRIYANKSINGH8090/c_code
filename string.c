#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{char str[75];
    // char str[] = {'p', 'r', 'i', 'y', 'a', 'n', 'k', '\0'};
// char str[]="priyank";
gets(str);
printf("\n");
// using array in function
    printstr(str);
    printf("\n");
    // using printf
    printf("%s\n",str);
    // using puts
    puts(str);
    return 0;
}