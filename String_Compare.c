#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "apple";
    char b[100] = "air";

    int cmp = strcmp(a,b);
    printf("%d", cmp);
    return 0;
}