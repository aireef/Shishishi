#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    char sentence[1000];
    int length =0;
    int words = 0;

    printf("Masukkan kalimat\n");

    scanf("%[^\n]s", sentence);

    while (sentence[length] != '\0')
    {
       length++;
    }

    for (int i = 0; i < length; i++){
            if (sentence[i] == ' ' || sentence[i] =='\n')
            {
                words++;
            }
            
        }

        printf("%d", words);
    
    
    return 0;
}
