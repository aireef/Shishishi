#include <stdio.h>

int main()
{
    int numA;
    int numB;
    int numC;

    scanf("%d %d", &numA, &numB);

    numC = numA + numB;

    for(int i = numA; i<= numC; i++){
        printf("%d\n", i);
    }
    return 0;
}
