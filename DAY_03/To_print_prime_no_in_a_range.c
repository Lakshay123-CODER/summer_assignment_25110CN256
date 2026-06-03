# include <stdio.h>
int main(){
    int start,end, n,i,c=0;
    printf("enter starting number:");
    scanf("%d",&start);
     printf("enter ending number:");
    scanf("%d",&end);
    for(n=start;n<=end;n++){
        c=0;
    for(i=1;i<=n;i++){
    if(n%i==0){
        c=c+1;
    }
    }
    if(c==2){
        printf("%d \n",n);
    }
}
    return 0;
}