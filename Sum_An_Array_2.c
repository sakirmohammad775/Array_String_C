#include <stdio.h>

int a[100000];

int goToIndex(int i, int n) {
    if (i == n) {
        return 0;
    }
    return a[i] + goToIndex(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = goToIndex(0, n);

    // Use `sum` as needed; it is now calculated using recursion
    return 0;
}
/*
Explanation
The goToIndex function now returns the sum of the elements from index i to n-1.
The base case if (i == n) returns 0, which stops the recursion.
The recursive call a[i] + goToIndex(i + 1, n) adds the current element to the result of the remaining elements, effectively computing the total sum.
Usage
The variable sum in main() will now hold the total sum of the array elements after the recursive call.
You can use sum further in your program for any purpose as needed, without printing it.
*/