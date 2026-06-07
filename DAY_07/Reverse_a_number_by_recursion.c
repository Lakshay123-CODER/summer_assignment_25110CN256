# include<stdio.h>
int reverse(int n,int rev);
int main(){
    int n;
    printf("enter any no:");
    scanf("%d",&n);
    printf("reverse of number is:%d",reverse(n,0));
    return 0;
}
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    int revn=reverse(n/10,rev*10+n%10);
    return revn;
}