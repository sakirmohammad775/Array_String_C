#include <stdio.h>
#include <string.h>
int main()
{
    char str[20]="dcba";
    int len = strlen(str);

    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s", str);
    return 0; //
}