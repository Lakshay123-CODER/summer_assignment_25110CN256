# include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("enter the term:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
 printf("%d ",fib(i));
    }
    return 0;
}
fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNUM1=fib(n-1);
    int fibNUM2=fib(n-2);
    int fib=fibNUM1+fibNUM2;
    return fib;
}