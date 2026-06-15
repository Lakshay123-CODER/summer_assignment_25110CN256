#include<stdio.h>
int main(){
    int n,a[100],key,i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elments of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to be search:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
    printf("elments found at index:%d",i);
    return 0;
    }
    }
    printf("elments not found");
    return 0;
}