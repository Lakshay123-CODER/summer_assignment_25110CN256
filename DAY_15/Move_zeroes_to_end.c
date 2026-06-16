#include<stdio.h>
int main(){
    int n,i,j=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    while(j<n){
        a[j]=0;
        j++;
    }
    printf("array after moving zeroes:");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}