#include<stdio.h>
#include<string.h>
int main(){
    char S[1001];
    scanf("%s",S);
    char target[]="hello";
    int count=0;
    for(int i=0;S[i]!='\0';i++){
        if(S[i]==target[count]){
            count++;

        }
        
    }
    printf("No\n");
    return 0;
}