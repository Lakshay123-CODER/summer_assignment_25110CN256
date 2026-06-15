#include<stdio.h>
int main(){
    int n,a[100],i,j,dup;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
            dup=a[i];
                break;
            }
        }
    }
    printf("duplicate element is:%d",dup);
return 0;
}