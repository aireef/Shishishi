#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int hasil[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("[%d][%d] = %d\n", i, j, matrix[i][j]);
            hasil[i][j] = matrix[i][j] * matrix2[j][i];
            
        }
        
    }

     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("[%d][%d] = %d\n", i, j, matrix[i][j]);
            
            printf("\t %d", hasil[i][j]);
        }
        printf("\n");
        
    }

    

    return 0;
}
