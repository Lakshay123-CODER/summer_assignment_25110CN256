#include<stdio.h>
int main(){
    int n,a[100],largest,second;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest=second=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
        second=largest;
        largest=a[i];
        }
    }
    printf("second largest elements is:%d \n",second);
    return 0;
}