#include <stdio.h>

struct position
{
    int x;
    int y;
};

struct dot
{
    char kar;
    struct position posisi;
};

void setDot(){


}


void printDot(){


}
int main(int argc, char const *argv[])
{
    int tests;
    scanf("%d", &tests);
    do
    {
        /* code */
    
    
    struct dot aku;
    printf("Char : \n");
    scanf("%c", &aku.kar);
    scanf("%d", &aku.posisi.x);
    scanf("%d", &aku.posisi.y);

    printf("%c %d %d", aku.kar, aku.posisi.x, aku.posisi.y);

    } 
    return 0;
}

