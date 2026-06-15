#include<stdio.h>
int main(){
    int n,a[100];
    int even=0,odd=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter element of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;    
    }
    printf("even elements are:%d \n",even);
    printf("odd elments are:%d",odd);
    return 0;
}