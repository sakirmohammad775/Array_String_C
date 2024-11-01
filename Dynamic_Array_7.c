#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int));
    if (a == NULL)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        a = (int *)realloc(a, (i + 1) * sizeof(int));
        if (a == NULL)
        {
            return 0;
        }
        a[i] = x;
    }
    for(int i = 0; i <n;i++){
        printf("%d ", a[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    free(a);
    printf("\n");

    return 0;
}