#include <stdio.h>
#include <string.h>
int main()
{
    const int Maximum = 100001;
    int N;
    scanf("%d", &N);

    int arr[N];
    int count[Maximum];
    for(int i=0;i<Maximum;i++){
        count[i]=0;
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    int newCount = 0;
    for (int i = 0; i < Maximum; i++)
    {
        if (count[i] == 1)
        {
            newCount++;
        }
    }
    printf("%d\n", newCount);
    return 0;
}