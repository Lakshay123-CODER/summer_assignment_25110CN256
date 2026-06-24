#include<stdio.h>
int main(){
    int a[10][10],r,i,j,c,sum=0;
    printf("enter rows and column of matrix:");
    scanf("%d%d",&r,&c);
        printf("enter matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<r;i++){
        sum+=a[i][j];
        }
        printf("sum of column %d=%d\n",j+1,sum);
    }
    return 0;
}