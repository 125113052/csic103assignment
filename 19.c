#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    int topIndex = 0;

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", s[i].name);  
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\n Student with the highest marks:\n");
    printf("Name: %s\n", s[topIndex].name);
    printf("Roll Number: %d\n", s[topIndex].roll);
    printf("Marks: %.2f\n", s[topIndex].marks);

    return 0;
}