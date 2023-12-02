#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Array harus memiliki setidaknya 3 elemen\n");
        return 1;
    }

    int array[n];
    printf("Masukkan elemen-elemen array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int smallest1, smallest2, smallest3;

    if (array[0] < array[1]) {
        smallest1 = array[0];
        smallest2 = array[1];
    } else {
        smallest1 = array[1];
        smallest2 = array[0];
    }

    for (int i = 2; i < n; i++) {
        if (array[i] < smallest1) {
            smallest3 = smallest2;
            smallest2 = smallest1;
            smallest1 = array[i];
        } else if (array[i] < smallest2) {
            smallest3 = smallest2;
            smallest2 = array[i];
        } else if (array[i] < smallest3) {
            smallest3 = array[i];
        }
    }

    printf("3 angka terkecil dalam array adalah: %d, %d, %d\n", smallest1, smallest2, smallest3);

    return 0;
}
