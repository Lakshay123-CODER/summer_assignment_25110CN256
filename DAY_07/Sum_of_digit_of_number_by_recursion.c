int sum(int n);
int main(){
    int n;
    printf("enter any no:");
    scanf("%d",&n);
    printf("sum of no are:%d",sum(n));
    return 0;

}
 int sum(int n){
    if(n==0){
        return 0;
    }
    int sumN=sum(n-1);
    int sum=sumN+n;
    return sum;
}