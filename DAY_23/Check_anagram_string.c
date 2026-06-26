#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int i,freq[256]={0};
    int len1,len2;
    printf("enter first string:");
    gets(str1);
    printf("enter second string:");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2){
        printf("not anagrams");
        return 0;
    }
    for(i=0;str1[i]!='\0';i++){
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    for(i=0;i<256;i++){
        if(freq[i]!='\0'){
            printf("not anagrams");
        }

    }
    printf("string are anagrams");
    return 0;


}