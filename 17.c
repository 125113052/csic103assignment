#include <stdio.h>

int main() {
   
    int mat1[2][2]={{1,2},{2,7}};
    int sum=0;
     for (int i = 0; i < 2; i++)
    {
       
         sum =sum + mat1[i][i]+mat1[i][1-i];
        }
    printf("the sum of principle and secondary diagonal is %d\n",sum);

printf( "maryadit 125113052\n");
return 0;
}