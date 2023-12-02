#include <stdio.h>

int main() {
    int tCase;
    scanf("%d", &tCase); // Membaca jumlah test case

    for (int i = 1; i <= tCase; i++) {
        int A, B;
        scanf("%d %d", &A, &B); // Membaca input A dan B

        int total = A; // Inisialisasi jumlah total cangkir Thai tea yang dapat diminum

        while (A >= B) {
            int tukar = A / B; // Hitung berapa banyak cangkir kosong yang dapat ditukar
            total += tukar;    // Tambahkan ke total
            A = tukar + (A % B); // Hitung sisa cangkir yang belum ditukar
        }

        printf("Case #%d: %d\n", i, total); // Menampilkan hasil untuk test case ke-i
    }

    return 0;
}