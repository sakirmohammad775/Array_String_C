#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    printf("%d ",a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("\n%d\n",sum);
    float average=sum/n;
    printf("%.2f\n",average);
    return 0;
}