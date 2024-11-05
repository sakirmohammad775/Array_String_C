#include<stdio.h>
int value(int n){
    for(int i=0; i<n; i++){
        printf("I love Recursion\n");
    }
    return 0;

}

int main(){
    int n;
    scanf("%d",&n);
    value(n);
    return 0;
}
