#include <stdio.h>


int fac(int x){

 if (x==0){
    return 0;
 }else{
    return x + fac(x-1);
 }
}



int main(int argc, char const *argv[])
{
    int x =4;

    printf("%d", fac(x));
    return 0;
}
