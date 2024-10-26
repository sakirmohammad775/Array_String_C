#include <stdio.h>

#include <string.h> // strlen() function
int main()
{
    char str[10] = "abcde bbh";
   
    int length=strlen(str); //find out the length of the string 
    printf("%d", length);

    return 0;
}