#include<stdio.h>
int main(){
    int i,j,temp,n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("descending order:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}