#include <stdio.h>

int a[100000], sum;

void goToIndex(int i, int n)
{
    if (i == n)
    {
        return;
    }
    sum += a[i];
    goToIndex(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Use the global sum variable
    sum = 0;
    goToIndex(0, n);

    printf("%d\n", sum);

    // At this point, `sum` holds the total of the array elements
    // You can use `sum` as needed

    return 0;
}
