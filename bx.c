#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Membaca jumlah kasus uji (T)

    for (int case_number = 1; case_number <= T; case_number++) {
        int X;
        scanf("%d", &X); // Membaca ukuran array (X)

        int array[X][X];
        int column_sum[X];

        // Menginisialisasi jumlah kolom menjadi 0
        for (int i = 0; i < X; i++) {
            column_sum[i] = 0;
        }

        // Membaca elemen-elemen array dan menghitung jumlah kolom
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &array[i][j]);
                column_sum[j] += array[i][j];
            }
        }

        // Menampilkan hasil
        printf("Case #%d:", case_number);
        for (int i = 0; i < X; i++) {
            printf(" %d", column_sum[i]);
        }
        printf("\n");
    }

    return 0;
}