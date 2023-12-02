#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    char op;
    int c;

    scanf ("%d %c %d", &a, &op, &b);

    switch (op)
    {
    case '+':
        c = a + b;
        printf("%d", c);
        break;
    
    case '-':
        c = a - b;
        printf("%d", c);
        break;

    case '*':
        c = a * b;
        printf("%d", c);
        break;

    case '/':
        c = a / b;
        printf("%d", c);
        break;

    case '%':
        c = a % b;
        printf("%d", c);
        break;
    
    default:
    scanf("error");
        break;
    }


    return 0;
}
