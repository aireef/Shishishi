#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[500];
    int length = 0;

    scanf("%s", str);

    while (str[length] != '\0'){
        length++;
    }

    printf("%d\n", length);

    for(int i = length; i>=0; i--){
        printf("%c", str[i]);
    }
    
    return 0;
}
