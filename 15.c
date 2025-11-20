#include <stdio.h>

int main() {
    int mat1[2][2]={{1,0},{0,1}};
    int mat2[2][2]={{4,5},{5,7}};
    int mat3[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];

        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            printf("%d\n",mat3[i][j]);
        }
        
    }
    

printf( "maryadit 125113052\n");
return 0;
}