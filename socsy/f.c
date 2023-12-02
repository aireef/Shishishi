#include <stdio.h>

long long jojonanci(int N, long long X, long long Y) {
    long long A[N + 1];
    A[0] = X;
    A[1] = Y;

    for (int i = 2; i <= N; i++) {
        A[i] = A[i - 1] - A[i - 2];
    }

    return A[N];
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        long long X, Y;
        scanf("%d %lld %lld", &N, &X, &Y);

        long long result = jojonanci(N, X, Y);
        printf("Case #%d: %lld\n", i, result);
    }

    return 0;
}
