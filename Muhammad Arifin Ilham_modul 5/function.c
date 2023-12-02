#include <stdio.h>

 area(int l, int w){
    int area = l * w;

    return area;
}

int main(int argc, char const *argv[])
{
    int x;
    int y;

    printf("input length and width : \n");

    scanf("%d %d", &x, &y);

    

    printf("%d", area(x,y));
    return 0;
}
