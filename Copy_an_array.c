#include <stdio.h>
int a[10000], b[10000]; // global variables for
int main()
{
    int length1 = 0, length2 = 0;
    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }
    // before copy
    printf("Before copy:\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    a[2]=100;
    //after Copy
    printf("After copy:\n");
    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }
    for(int i=0;i<length1;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i=0;i<length1;i++){
        printf("%d ", b[i]);
    }
    
    return 0;
}