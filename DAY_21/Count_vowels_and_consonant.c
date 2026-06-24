#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    char ch;
    int vowel=0,consonant=0,i=0;
    printf("enter a string:");
    gets(str);
    while(str[i]!='\0'){
 ch=tolower(str[i]);
    if(ch>='a' && ch<='z'){
        if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u')
        vowel++;
        else
        {
            consonant++;
        }
    }
        i++;
    }
    printf("vowels=%d\n",vowel);
    printf("consonant=%d\n",consonant);
    return 0;
}
        