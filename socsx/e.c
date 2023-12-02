#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tCase;
    char input[501];
    scanf("%d", &tCase);

    for(int i=1; i<= tCase; i++){
        scanf(" %[^\n]s", input);

        int length = 0;

        while(input[length] != '\0'){
            length++;
        }
        int kiri = 0;
        int kanan = length -1;
        int palindrome = 0;

        while (kiri < kanan){
            if(input[kiri] == input[kanan]){
                palindrome = 1;
            }
            kiri++;
            kanan--;
        }

        if(palindrome == 1){
            printf("Case #%d: Yay, it's a palindrome\n", tCase);
        }else{
            printf("Case #%d: Nah, it's not a palindrome\n", tCase);
        }
    }
    return 0;
}
