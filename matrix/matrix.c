#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {//i baris, j kolom
            // printf("[%d][%d] = %d\n", i, j, matrix[i][j]);
            printf("\t %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
