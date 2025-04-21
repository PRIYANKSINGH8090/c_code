#include <stdio.h>
int main() {
    int n;
    scanf("%d", & n);

    char ** arr;
    arr = (char ** ) malloc(n * sizeof(char * ));

    for (int i = 0; i < n; i++) {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc( * (arr + i), strlen( * (arr + i)) + 1);
    }
    for (int i = 0; i < n; i++) {
        int b = strlen(arr[i]);
        if (b > 10)
        {
            printf("%c%d%c\n", arr[i][0], b - 2, arr[i][b - 1]);
        }
        else {
            printf("%s\n", arr[i]);
        }
        b = 0; 
    }
    return 0;

}