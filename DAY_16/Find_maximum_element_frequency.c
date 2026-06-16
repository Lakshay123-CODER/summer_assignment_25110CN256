# include<stdio.h>
int main(){
    int n,maxfreq=0,element;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    int freq=1;
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j])
        freq++;
        }
        if(freq>maxfreq){
            maxfreq=freq;
            element=a[i];
        }
    }
    printf("element=%d\nfrequency=%d",element,maxfreq);
    return 0;
}