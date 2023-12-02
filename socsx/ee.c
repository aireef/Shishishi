#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int case_number = 1; case_number <= T; case_number++) {
        char word[501];
        scanf("%s", word);

        int length = 0;
        int is_palindrome = 1;

        // Menghitung panjang kata
        while (word[length] != '\0') {
            length++;
        }

        int left = 0;
        int right = length - 1;

        while (left < right) {
            if (word[left] != word[right]) {
                is_palindrome = 0; // Bukan palindrom
                break;
            }
            left++;
            right--;
        }

        // Memeriksa apakah kata adalah palindrom
        if (is_palindrome) {
            printf("Case #%d: Yay, it's a palindrome\n", case_number);
        } else {
            printf("Case #%d: Nah, it's not a palindrome\n", case_number);
        }
    }

    return 0;
}
