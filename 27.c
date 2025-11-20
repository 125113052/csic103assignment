#include <stdio.h>

int main() {
    int arr[] ={1,5,7};
    int*ptr;
    ptr=arr;
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
       sum+=*(ptr+i);
    }
    printf("the sum of all the elements is %d\n",sum);
printf( "maryadit 125113052\n");
return 0;
}