# include<stdio.h>
int palindrome(int n);
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(palindrome(n))
    printf("palindrome number");
    else
    {
        printf("not a palindrome no");
    }
    
}
int palindrome(int n){
    int rev=0,rem,temp=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    return 1;
    else
    {
        return 0;
    }
    
}