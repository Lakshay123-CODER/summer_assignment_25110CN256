# include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the no :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of natural no:%d\n",sum);
    return 0;
}