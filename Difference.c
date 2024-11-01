#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int *root1 = &A;
    int *root2 = &B;

    int difference = abs(*root1 - *root2);
    printf("%d", difference);
    return 0;
}
