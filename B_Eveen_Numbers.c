#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i += 2)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }

        printf("\n");
    }
    return 0;
}