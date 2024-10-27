#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100], c[100];
    scanf("%s %s %s",&a,&b,&c);
    
    strcat(a," ");
    strcat(a ,b);
    strcat(a," ");
    strcat(a,c);
    

    printf("%s",a);
    return 0;
}