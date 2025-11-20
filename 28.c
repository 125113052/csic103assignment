#include<stdio.h>

int main(){
    char str[] ="maryadit";
    int len=0;
    char*ptr=str;
    while(*(ptr)!='\0'){
        len++;
        ptr+=1;
    }
    printf("the lenght is %d\n ",len);
    printf("maryadit 125113052");
}