#include<stdio.h>
void fun(int i,int n){
    if(i>n){
        return;
    }
    // printf("Before Function Call,Current X: %d\n",i);
    
    fun(i+1,n);
    printf("After Function Call,Current X:%d\n",i);
}

int main(){
    printf("Before Function Call in Main\n");
    fun(1,5);
    printf("After Function Call in Main");
    return 0;
}

//most important function
//flow diagram