#include<stdio.h>
int main(){
    int i,j,a[3][3];
    printf("enter matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
        printf("transpose of matrices:\n");
            for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d ",a[j][i]);
            }
             printf("\n");
        }
            return 0;
    }
