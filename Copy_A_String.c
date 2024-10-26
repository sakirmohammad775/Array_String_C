#include <stdio.h>
#include <string.h>
int main()
{
    char a[10],b[10];
    scanf("%s %s",&a,&b);
    strcpy(b,a);
    printf("%s %s",a,b);
    return 0;
}