#include <stdio.h>
#include <string.h>
int main()
{
    int a[10] = {0};
    char str[1000];
    scanf("%s", &str);
    int b = strlen(str);
    for (int i = 0; i < b; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            a[str[i]-'0']++;
        }
    }
for (int j = 0; j <=9; j++)
{
   printf("%d ",a[j]);
}

    return 0;
}
