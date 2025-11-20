#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%2d %2d",&a,&b);
    printf("value before swapping %d %d\n",a,b);
    swap(&a,&b);
    printf("value after swapping %d %d",a,b);
    
}