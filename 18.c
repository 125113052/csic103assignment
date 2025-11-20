#include<stdio.h>
typedef struct student
{
    char name[50];
    float marks;
    int roll;
}stud;
void display(stud s){
     printf("\nStudent Details:\n");
 printf("Name:%s\n", s.name);
 printf("Roll Number:%d\n", s.roll);
 printf("Marks:%.2f\n", s.marks);

}
int main()
{
    stud s;
    printf("enter student name\n");
    scanf("%s",s.name);
    printf("enter student roll\n");
    scanf("%d",&s.roll);
    printf("enter student marks\n");
    scanf("%f",&s.marks);
    display(s);
    printf("maryadit 125113052\n");
}