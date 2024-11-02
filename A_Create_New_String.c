#include<stdio.h>
#include<string.h>
int main(){
    char S[1001],T[1001];
    scanf("%s %s",&S,&T);
    int len1=strlen(S);
    int len2=strlen(T);
    printf("%d %d",len1,len2);
    return 0;
}