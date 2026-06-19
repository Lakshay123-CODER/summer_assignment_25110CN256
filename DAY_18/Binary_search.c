#include<stdio.h>
int main(){
    int i,key,n; 
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter sorted elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements to search:");
    scanf("%d",&key);
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
    if(a[mid]==key){
        printf("element found at index %d",mid);
        return 0;
    }
    else if(key>a[mid])
        low=mid+1;
    else
    {
        high=mid-1;
    }
}
    printf("element not found");
    return 0;
}
    
