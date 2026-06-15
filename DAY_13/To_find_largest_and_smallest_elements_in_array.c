#include<stdio.h>
int main(){
    int n,a[100],smallest,largest;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    smallest=largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest)
        largest=a[i];
        if(a[i]<smallest)
        smallest=a[i];
    }
    printf("largest=%d \n",largest);
    printf("smallest=%d",smallest); 
    return 0;
}