#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct student s;
    int n, i;

    
    fp = fopen("students.txt", "w");   // text mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("How many students to store? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s.roll);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Marks: ");
        scanf("%f", &s.marks);

      
        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    printf("\nRecords stored successfully in students.txt!\n\n");

   
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    
   

   
    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) == 3) {
        printf("Roll: %d\n", s.roll);
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);
       
    }

    fclose(fp);
    return 0;
}
