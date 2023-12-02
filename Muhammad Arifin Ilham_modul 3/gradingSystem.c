#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int score;

    scanf("%d", &score);

    if(score >=90 && score <= 100){
        printf("A");
    }else if(score >= 80){
        printf("B");
    }else if(score >= 70){
        printf("C");
    }else if(score >= 60){
        printf("D");
    }else if(score >= 50){
        printf("E");
    }else if(score >= 40 || score <=40){
        printf("F");
    }else{
        printf("error");
    }
    return 0;
}
