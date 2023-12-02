#include <stdio.h>

int main()
{
    float score;

    scanf("%d", &score);

    if( score <= 4.0){
        printf("cumlaude");
    }else if( score <= 3.4){
        printf("Outstanding");
    }else if( score <= 2.9){
        printf("very good");
    }else if( score <= 2.4){
        printf(" good ");
    }else if(score <= 2.0){
        printf("poor ");
    }else{
        printf("F");
    }
    return 0;
}
