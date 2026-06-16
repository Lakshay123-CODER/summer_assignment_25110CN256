# include<stdio.h>
int main(){
    int n,sum;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter required sum=");
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum)
            printf("%d + %d=%d\n",a[i],a[j],sum);
        }
    }
    return 0;
}

