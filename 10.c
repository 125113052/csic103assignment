#include <stdio.h>

int main() {
    int arr[]={1,2,4};
    int largest=arr[0];
    for (int i = 0; i < 3; i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    printf("the largest number is %d\n",largest);
    printf( "maryadit 125113052\n");
return 0;
}