#include <stdio.h>

int add(int a, int b, int c, int d)
{
    int sum = a + b - c + d;
    return sum;
}

int main()
{
    int result = add(10, 20, 40, 20);

    printf("Before\n");
    printf("The sum is %d\n", result); // after execution
    printf("After\n");
    printf("The sum is %d\n", add(23, 45, 12, 34)); // after execution
    // function will be called from different place,advantage
    return 0;
}