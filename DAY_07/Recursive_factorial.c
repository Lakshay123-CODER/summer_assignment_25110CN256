int fact(int n);
int main(){
    int n;
    printf("enter any no:");
    scanf("%d",&n);
    printf("factorial of no is:%d",fact(n));
    return 0;

}
 int fact(int n){
    if(n==0){
        return 1;
    }
    int factN=fact(n-1);
    int fact=factN*n;
    return fact;
}