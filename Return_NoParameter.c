#include<stdio.h>
int add(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
double getPi(){
    return 3.14159;
}
int main(){
    printf("%d\n",add()); //
    printf("%d\n",add());
    printf("%llf",getPi());
    return 0;
}