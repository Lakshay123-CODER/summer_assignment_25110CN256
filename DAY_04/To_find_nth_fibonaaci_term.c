# include <stdio.h>
int main(){
    int i,n;
    int a=0,b=1,c;
    printf("enter n:");
    scanf("%d",&n);
    if(n==1){
    printf(" Nth fibonacci term=%d",a);
    }
    else if(n==2){
        printf("Nth fibonacci term=%d",b);
    }
    else{
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("Nth fibonaaci term=%d",b);
}
    return 0;
}