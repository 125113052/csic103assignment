#include<stdio.h>

int main(){
    FILE*fp;
    fp=fopen("text1.txt","a");
    char text[100];
    fgets(text,sizeof(text),stdin);
    fputs(text,fp);
    fclose(fp);
    printf("\nmaryadit 125113052");
    return 0;
}