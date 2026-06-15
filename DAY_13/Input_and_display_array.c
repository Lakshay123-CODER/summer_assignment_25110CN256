#include<stdio.h>
int main(){
    int n,a[100];
    printf("enter size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}