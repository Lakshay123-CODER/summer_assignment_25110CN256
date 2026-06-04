# include <stdio.h>
int main(){
    int n,i,rem, temp,sum=0;
    printf("enter any no:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    printf("sum=%d \n",sum);
    if(sum==n){
        printf("armstrong no");
    }
    else{
        printf("not a armstrong no");
    }
    return 0;
}