    #include <stdio.h>

int main() {
    int F0, F1, K;
    int i, temp;

    // Membaca input F0, F1, dan K
    scanf("%d %d", &F0, &F1);
    scanf("%d", &K);

    // Menghitung deret Fibonacci hingga mencapai angka ke-K
    for (i = 2; i <= K; i++) {
        temp = F0 + F1;
        F0 = F1;
        F1 = temp;
    }

    // Menampilkan hasil, yaitu angka ke-K
    printf("%d\n", F1);

    return 0;
}
