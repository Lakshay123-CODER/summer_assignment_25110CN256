#include<stdio.h>
int main(){
    int i,a[50],b[50],n1,n2,j;
    printf("enter size of first array:");
    scanf("%d",&n1);
    printf("enter elements:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter size of second array:");
    scanf("%d",&n2);
    printf("enter elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("intersection:");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}
