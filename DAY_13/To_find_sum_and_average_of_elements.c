#include<stdio.h>
int main(){
    int n,a[100],sum=0;
    float avg;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elments:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(float)sum/n;
    printf("sum of array elements are: %d \n",sum);
    printf("average of elments are:%f \n",avg);
    return 0;

}