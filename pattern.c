#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }



    //for reverse
    for(int i = n; i >=0; i--){
        for(int j=i; j >>= 0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
1
1 2
1 2 3
1 2 34
1 2 345
*/