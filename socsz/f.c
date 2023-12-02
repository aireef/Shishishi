#include <stdio.h>

int main() {
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1; i <= tcase; i++) {
        int N, X;
        scanf("%d %d", &N, &X);
        int Grb[N];

        int i, j;
        for ( i = 0; i < N; i++)
        {
            scanf("%d", &Grb[i]);
        }
        
        int temp;
		int count = 0;
        for ( i = 0; i < N-1; i++)
        {
            for( j = 0; j < (N-1-i); j++){
				if(Grb[j] > Grb[j + 1]){
					temp = Grb[j];
					Grb[j] = Grb[j+1];
					Grb[j + 1] = temp;
					count = count + X;
				}
			}
        }     
         printf("Case #%d: %d\n", tcase, count);
    }

    return 0;
}