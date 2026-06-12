#include<stdio.h>
int perfect(int n);
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(perfect(n))
    printf("perfect no");
    else
    {
        printf("not a perfect number");
    }
    
}
int perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    return sum==n;
}