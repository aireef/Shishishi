#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tinggi;
    int alas;

    scanf("%d %d", &tinggi, &alas);

    for (size_t i = 1; i <= tinggi; i++){

        for (int j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for(int j = 1; j<= alas; j++){
            printf("*");
        }
        printf("\n");
        
        
    }
    


    return 0;
}
