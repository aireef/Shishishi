#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input[100];
    int length =0;
    scanf("%s", input);

    while (input[length] != '\0')
    {
        length ++;
    }
    

    for (int i = 0; i < length; i++)
    {
        printf("%s", input[i]);
    }
    
    // printf("%d", length);
    
    return 0;
}
