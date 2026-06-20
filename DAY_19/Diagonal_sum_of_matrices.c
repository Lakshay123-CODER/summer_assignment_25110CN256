#include<stdio.h>
int main(){
    int i,j,a[3][3],sum=0;
    printf("enter matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<3;i++){
     sum+=a[i][i];
     }

     printf("diagonal sum:%d",sum);
     return 0;
}