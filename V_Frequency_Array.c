 #include<stdio.h>
 f[100005];//frequency array for
 //each number in range 1 to 100000
 int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n+5];//array initialisation
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
        f[a[i]]+=1;//updating frequency of each number
    }

    for(int i=1 ; i<=m ; i++){
        printf("%d\n",f[i]);
}

    return 0;
 }