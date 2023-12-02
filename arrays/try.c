#include <stdio.h>

// Fungsi untuk mengisi array dengan input dari pengguna
void inputArray(int arr[], int size) {
    printf("Masukkan elemen-elemen array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Fungsi untuk mencari nilai maksimum dalam array
int findMaximum(int arr[], int size) {
    if (size <= 0) {
        return -1; // Mengembalikan nilai negatif jika array kosong atau ukuran tidak valid
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Fungsi untuk mencari nilai minimum dalam array
int findMinimum(int arr[], int size) {
    if (size <= 0) {
        return -1; // Mengembalikan nilai negatif jika array kosong atau ukuran tidak valid
    }

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    printf("Masukkan ukuran array: ");
    scanf("%d", &size);

    int arr[size];
    inputArray(arr, size);

    int max = findMaximum(arr, size);
    int min = findMinimum(arr, size);

    if (max == -1 || min == -1) {
        printf("Array kosong atau ukuran tidak valid.\n");
    } else {
        printf("Nilai maksimum dalam array: %d\n", max);
        printf("Nilai minimum dalam array: %d\n", min);
    }

    return 0;
}
