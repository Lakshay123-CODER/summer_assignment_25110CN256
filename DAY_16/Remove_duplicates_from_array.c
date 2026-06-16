# include<stdio.h>
int main(){
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array after removing duplicates:");
    for(int i=0;i<n;i++){
        int duplicate=0;

        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0)
        printf("%d ",a[i]);
    }
    return 0;
}
