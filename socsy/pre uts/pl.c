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

    printf("\n");

    int kiri = 0;
    int kanan = length-1;

    int palindrome = 0;

    while (kiri<kanan)
    {
        if(str[kiri] == str[kanan]){
            palindrome = 1;
        }
        kiri ++;
        kanan --;
    }

    if (palindrome == 1)
    {
        printf("palindrome \n");
    }else{
        printf("not");
    }
    
    
    
    return 0;
}
