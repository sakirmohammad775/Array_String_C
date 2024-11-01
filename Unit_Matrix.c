#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int mat[N][N];
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &mat[k][i]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            if ((i != k && mat[i][k] != 0) || (i == k && mat[i][k] != 1)){
                printf("NO");
            return 0;
            }
        }
    }
    printf("YES");
    return 0;
}