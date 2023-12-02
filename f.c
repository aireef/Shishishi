#include <stdio.h>

int main() {
    int N;

  
    scanf("%d", &N);

    int variations = 0;

    for (int j = 0; j <= N; j++) { 
        for (int l = 0; l <= N; l++) { 
            int b = N - j - l;
            if (b >= 0) {
                variations++;
            }
        }
    }

    printf("%d\n",variations);

    return 0;
}
