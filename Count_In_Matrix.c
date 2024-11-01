#include <stdio.h>
int main()
{
    int X, N, M;
    scanf("%d", &N);
    scanf("%d %d", &M, &X);
    int mat[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int k = 0; k < X; k++)
    {
        int nums, total = 0;
        scanf("%d", &nums);

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (mat[i][j] == nums)
                {
                    total++;
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}