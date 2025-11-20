#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %s", b[i].title);
        printf("Author: ");
        scanf(" %s", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n Books priced above ₹500:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (b[i].price > 500) {
            printf("\nTitle: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: ₹%.2f\n", b[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found above ₹500.\n");
    }

    return 0;
}