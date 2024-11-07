#include <stdio.h>
int main()
{
    //input
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n+5][m+5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",a[i][j]);
        }
    }

    //output
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d] ", i, j);
        }
        printf("\n");
    }
    return 0;
}