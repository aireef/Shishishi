#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int batas = array[0];

    for (int i = 0; i<10 ; i++){
        if(array[i] > batas){
            batas = array[i];
        }
    }
    printf("The highest value is %d", batas);
    
    return 0;
}
