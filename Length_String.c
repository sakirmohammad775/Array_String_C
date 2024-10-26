#include <stdio.h>
int main()
{
    char str[10] = "abcde bh";
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) // skip empty
    {
        length++;
    }
    printf("%d", length);

    return 0;
}