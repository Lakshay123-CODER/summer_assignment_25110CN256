#include<stdio.h>
int main(){
    int i,a[50],b[50],c[50],n1,n2,j,k=0,flag;
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
    for(i=0;i<n1;i++){
        c[k++]=a[i];
    }
    for(i=0;i<n2;i++){
        flag=0;
        for(j=0;j<k;j++){
            if(b[i]==c[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            c[k++]=b[i];
        }
        printf("union:");
        for(i=0;i<k;i++){
            printf("%d ",c[i]);
        }
        return 0;
    }
}