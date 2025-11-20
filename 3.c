#include <stdio.h>

int main() {
    int year;
    printf("enter any year\n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("The year %d is a leap year",year);
    }
    else if(year%400==0){
        printf("the year %d is a leap year",year);
    }
    else{
        printf("Not a leap year");
    }
    printf("maryadit 125113052");
    return 0;
}
