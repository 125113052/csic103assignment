#include<stdio.h>
 
int main(){
    char str1[]="maryadit";
    char str2[52];
    char*ptr;
    ptr=str1;
    char*ptr2;
    ptr2=str2;
    
    while(*(ptr)!='\0'){
        *(ptr2)=*(ptr);
        ptr++;
        ptr2++;
    }
    *(ptr2)='\0';
    printf("the copied string is\n %s",str2);
    printf("\nmaryadit 125113052\n");
}