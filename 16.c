#include <stdio.h>
void display(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            printf("%d\t",arr[i][j]);
            printf("\n");
        }
        
    }
    

}

int main() {
    int mat1[2][2]={{1,2},{2,7}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            mat1[i][j]=mat1[j][i];
        }
    
    }
    display(mat1);
   
    

printf( "maryadit 125113052\n");
return 0;
}