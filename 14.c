#include <stdio.h>

int main() {
    int arr1[]={1,2,3},arr2[]={2,5,6};
    int n = sizeof(arr1)+sizeof(arr2)/sizeof(int);
    int arr3[n];
    for(int i = 0;i<3;i++)
    arr3[i]=arr1[i];
    for (int i = 3; i < 6; i++)
    {
        arr3[i]=arr2[i-3];
    }
    for (int  i = 0; i < 6; i++)
    {
        printf("%d\n",arr3[i]);
    }
    
    
printf( "maryadit 125113052\n");
return 0;
}