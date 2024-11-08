#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int element = a[0][0]; // element number of element  in the  vector

    int flag = 1;
    // check if the row elements are same
    // check if the diagonal elements are same

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if(flag==1){
        printf("Scaler");
    }
    else{
        printf("Not Scaler");
    }

    return 0;
}