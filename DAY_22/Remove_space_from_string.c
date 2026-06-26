#include<stdio.h>
int main(){
    char str[200];
    int i,j=0;
    printf("enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }        
    }
        str[j]='\0';
    printf("string without space :%s",str);
    return 0;

}