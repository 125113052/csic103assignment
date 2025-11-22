#include <stdio.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char ch;

   
    fp1 = fopen("text1.txt", "r");
    if (fp1 == NULL) {
        printf("Cannot open file1.txt\n");
        return 1;
    }

   
    fp2 = fopen("text2.txt", "r");
    if (fp2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(fp1);
        return 1;
    }

    
    fp3 = fopen("merged.txt", "w");
    if (fp3 == NULL) {
        printf("Cannot create merged.txt\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    printf("Files merged successfully into merged.txt\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
