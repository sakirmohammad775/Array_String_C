#include <stdio.h>
int a[100000], b[100000];
int main()
{   // Initialize
    // input n and array
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reverse the array and store in b[]
    for (int i = 0, j = length - 1; i < length; i++, j--)
    //
    {
        b[j] = a[i];
    }
    for (int i = 0; i < length; i++)
    {
        a[i] = b[i];
    } // Print the reversed array

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
/*
0123
3210
*/