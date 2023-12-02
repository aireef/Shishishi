#include <stdio.h>

int main(int argc, char const *argv[])
{

    int range;

    scanf("%d", &range);
    for (int i = 1; i <= range; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}
