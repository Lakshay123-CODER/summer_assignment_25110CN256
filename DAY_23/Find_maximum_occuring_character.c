#include<stdio.h>
int main(){
    char str[100];
    int i,max=0,freq[256]={0};
    char ch;
    printf("enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    freq[str[i]]++;
    for(i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
            ch=i;
        }
    }
    printf("maximum occuring character:%c",ch);
    return 0;
}