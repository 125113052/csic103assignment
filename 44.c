#include<stdio.h>

int main(){
    FILE*fp;
    fp = fopen("text1.txt","r");
    if(fp==NULL){
        printf("\nfile not found");
        return 1;
    }
    char text[100];
    while (fgets(text,100,fp)!=NULL)
    {
        printf("%s",text);
    }
    printf("\nmaryadit 125113052");
    
}