#include<stdio.h>
int sum(int x,int y){
    int sum =x+y;
    return sum;

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = sum(a,b);
    printf("%d",c);
    return 0;
}