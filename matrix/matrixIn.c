#include <stdio.h>

int main(int argc, char const *argv[])
{
    int baris;
    int kolom;

    printf("Masukkan dimensi matrix : \n");
    scanf("%d %d", &baris, &kolom);

    int matrix[baris][kolom];

    printf("Masukkan nilai matrix : \n");
    for (int i = 0; i < baris; i++){
        for(int j = 0; j<kolom;j++){
            
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < baris; i++){
        for(int j = 0; j<kolom;j++){
            
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
