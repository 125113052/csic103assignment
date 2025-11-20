#include <stdio.h>

int main() {
    #include <stdio.h>


    int arr[] = {12, 45, 7, 89, 23, 56, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr; 
    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 1; i < n; i++) {
        ptr++; 

        if (*ptr > largest)
            largest = *ptr;

        if (*ptr < smallest)
            smallest = *ptr;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;

printf( "maryadit 125113052\n");
return 0;
}