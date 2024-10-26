#include <stdio.h>
int main()
{
    char str[20];

    scanf("%[^\n]s", str);
    printf("%s", str);              // easily
    
    fgets(str, sizeof(str), stdin); // input string
    fputs(str, stdout);             // output string

    return 0;
}