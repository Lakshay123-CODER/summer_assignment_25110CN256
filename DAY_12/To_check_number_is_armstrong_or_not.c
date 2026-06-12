# include<stdio.h>
int armstrong(int n);
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(armstrong(n))
    printf("armstrong number");
    else
    {
        printf("not a armstrong no");
    }
    
}
int armstrong(int n){
    int sum=0,rem,temp=n;
    while(n){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    return 1;
    else
    {
        return 0;
    }
    
}