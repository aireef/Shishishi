#include <stdio.h>

int main() {
    int tinggi, i, j;

    printf("Masukkan tinggi jajargenjang: ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; i++) 
    {
        // Mencetak spasi untuk membuat pola jajargenjang
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }

        // Mencetak '*' untuk membentuk jajargenjang
        for (j = 1; j <= tinggi; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
