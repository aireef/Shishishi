#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        char S[1001];
        scanf("%s", S);

        int length = strlen(S);

        // Membalik kata dan mengubah huruf kapital
        for (int i = 0; i < length / 2; i++) {
            char temp = S[i];
            S[i] = S[length - i - 1];
            S[length - i - 1] = temp;
        }

        for (int i = 0; i < length; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                S[i] = S[i] + 32; // Mengubah huruf kapital menjadi huruf kecil
            } else if (S[i] >= 'a' && S[i] <= 'z') {
                S[i] = S[i] - 32; // Mengubah huruf kecil menjadi huruf kapital
            }
        }

        printf("Case #%d: %s\n", caseNum, S);
    }

    return 0;
}
