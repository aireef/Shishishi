#include <stdio.h>

char fibo(char x, char y, int z){
    if (z == 0){
        printf("%c", x);   //f(0) = a



    }else if( z ==1){
        printf("%c", y); //f(1) = b
    }else{
        fibo(x, y, z-1);
        fibo(x, y, z-2);

        //misal z = 2, maka f(2-1) >> f(1) = b,
        //                  f(2-2) >> f(0) = a
    }
    



}



int main()
{
    int tCase;

    scanf("%d", &tCase);

    for (int i = 1; i <= tCase; i++){
        int x;
        char y;
        char z;

        scanf("%d %c %c", &x, &y, &z);
        printf("Case #%d: ", i);
        
        fibo(y,z,x);
        printf("\n");
    }
    
    return 0;
}
