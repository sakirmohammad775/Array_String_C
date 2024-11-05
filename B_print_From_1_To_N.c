#include <stdio.h>
int recursion(int N){
    for (int i = 1; i <= N;i++){
        printf("%d\n",i);
    }
    return 0;   
}
int main(){
    int N;
    scanf("%d",&N);
    recursion(N);
    return 0;
}