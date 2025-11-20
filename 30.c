#include <stdio.h>

int main() {
    #include <stdio.h>


struct Student {
    int id;
    char name[50];
    float marks;
};


    struct Student s1 = {101, "Maryadit", 85.5};

    
    struct Student *ptr;

    ptr = &s1;

    
    ptr->marks = 90.0;                 
    ptr->id = 102;                     
    printf(ptr->name, sizeof(ptr->name), "Aditya"); 

   
    printf("Updated Student Info:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;

printf( "maryadit 125113052\n");
return 0;
}