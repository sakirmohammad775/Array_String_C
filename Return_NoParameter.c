#include<stdio.h>
int add(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main(){
    printf("%d\n",add()); //
    printf("%d",add());
    return 0;
}