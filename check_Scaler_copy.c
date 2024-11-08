#include <stdio.h>   // Includes the standard input-output library for functions like printf and scanf

int main() {
    int row, col;   // Declares two integer variables `row` and `col` to store the dimensions of the matrix
    scanf("%d %d", &row, &col);   // Takes user input for the number of rows and columns and stores them in `row` and `col`

    

    int a[row][col];   // Declares a 2D array `a` of size `row x col` to store the matrix elements
    for (int i = 0; i < row; i++) {   // Loops through each row of the matrix
        for (int j = 0; j < col; j++) {   // Loops through each column in the current row
            scanf("%d", &a[i][j]);   // Takes input for each element of the matrix and stores it in `a[i][j]`
        }
    }

    int element = a[0][0];   // Initializes `element` with the first diagonal element, `a[0][0]`, to compare with other diagonal elements
    int flag = 1;   // Initializes `flag` to 1, assuming the matrix is scalar. It will be set to 0 if it is not

    // Loop to check if it's a scalar matrix
    for (int i = 0; i < row; i++) {   // Loops through each row
        for (int j = 0; j < col; j++) {   // Loops through each column in the current row
            if (i == j) {   // Checks if the current element is on the diagonal (where row index equals column index)
                if (a[i][j] != element) {   // Compares the diagonal element with `element`
                    flag = 0;   // If a diagonal element differs from `element`, sets `flag` to 0 (indicating it's not scalar)
                    break;   // Exits the inner loop since the matrix can't be scalar anymore
                }
            } else {   // Executes when the element is not on the diagonal
                if (a[i][j] != 0) {   // Checks if the off-diagonal element is non-zero
                    flag = 0;   // If any off-diagonal element is non-zero, sets `flag` to 0 (indicating it's not scalar)
                    break;   // Exits the inner loop since the matrix can't be scalar anymore
                }
            }
        }
        if (flag == 0) {   // Checks if `flag` is 0 after inner loop, meaning it's confirmed not scalar
            break;   // Exits the outer loop early, as further checks are unnecessary
        }
    }

    if (flag == 1) {   // Checks if `flag` is still 1, meaning all conditions for a scalar matrix were satisfied
        printf("Scaler");   // If `flag` is 1, prints "Scaler"
    } else {   // Executes if `flag` is 0
        printf("Not Scaler");   // If `flag` is 0, prints "Not Scaler"
    }

    return 0;   // Ends the program
}
