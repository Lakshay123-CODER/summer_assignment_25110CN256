#include<stdio.h>
int main(){
    int n,a[100],key,count=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elments of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    printf("Frequency of elements are:%d",count);
    return 0;
}