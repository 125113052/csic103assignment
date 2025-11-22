#include<stdio.h>

int main(){
    FILE*fp,*fp1;
    fp=fopen("text1.txt","r");
    fp1=fopen("text2.txt","w");
    if(fp==NULL){
        printf("\nfile not found");
        return 1;
    }
    char text[100];
    while(fgets(text,100,fp)!=NULL){
        fputs(text,fp1);
    }
    printf("\nmaryadit 125113052");

}