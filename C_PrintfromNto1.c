#include <stdio.h>
int recursion(int N){
    //reverse the 4 3 2 1
    for (int i = N; i >=1;i--){
        if(i>1){
        printf("%d ", i);
    }
    else{
        printf("%d", i);
    }
    }
    return 0;   
}
int main(){
    int N;
    scanf("%d",&N);
    recursion(N);
    return 0;
}