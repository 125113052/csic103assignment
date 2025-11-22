#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int count = 0;
    float sum = 0;

    fp = fopen("numbers.txt", "r");   
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    float average = sum / count;

    printf("Total numbers read : %d\n", count);
    printf("Sum of numbers     : %.2f\n", sum);
    printf("Average of numbers : %.2f\n", average);

    return 0;
}
