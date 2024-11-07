#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "apple";
    int f[26] = {0};

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        int index = ch - 'a'; // ASCII value of 'a' is 97
        f[index] =1;
    }
    int cnt=0;

    for (int i = 0; i < 26; i++){
        cnt+=f[i];
        if(f[i] ==1){

        printf("%c %d\n",i+'a', f[i]);
        }
    }
        printf("%d\n",cnt);
    return 0;
}