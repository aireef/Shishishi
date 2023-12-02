#include <stdio.h>
#include <string.h>

int main() {
    char sentence[10001];
    char c;
    int i = 0;

    while (scanf("%c", &c) == 1 && c != '\n' && i < 10000) {
       
        if (c >= 'a' && c <= 'z') {
            c -= 32; 
        } 
        switch (c) {
            case 'I':
                c = '1';
                break;
            case 'R':
                c = '2';
                break;
            case 'E':
                c = '3';
                break;
            case 'A':
                c = '4';
                break;
            case 'S':
                c = '5';
                break;
            case 'G':
                c = '6';
                break;
            case 'T':
                c = '7';
                break;
            case 'B':
                c = '8';
                break;
            case 'P':
                c = '9';
                break;
            case 'O':
                c = '0';
                break;
        }
        sentence[i++] = c;
    }
    sentence[i] = '\0';

    printf("%s\n", sentence);

    return 0;
}
