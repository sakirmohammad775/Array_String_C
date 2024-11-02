#include<stdio.h>
int main(){
    char str[20];
    int n;

    scanf("%d", &n); //input number
    scanf("%s", str); //input string

    int num = 0;    
    for (int i = 0; i < n; i++){
        int digit=str[i]-'0'; //string convert to digit
        num=num*10 + digit;
    }
    
    printf("%d\n", num); //output the resultant integer


    return 0;
}