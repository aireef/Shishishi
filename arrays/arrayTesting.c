#include <stdio.h>

void inputArr(int array[], int length){

    
    
    printf("Masukkan isi array\n");
    for (int i = 0; i < length; i++){
        scanf("%d", &array[i]);
        
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d", array[i]);
    }
    
    }

int maxVal(int array[], int length){
    int max = array[0];
    for (int i = 0; i < length; i++){
        if(array[i]> max){
            max = array[i];
        }
        
    }
    return max;
}
int minVal(int array[], int length){
    int min = array[0];
    for (int i = 0; i < length; i++){
        if(array[i]< min){
            min = array[i];
        }
        
    }
    return min;
}




int main()
{
    int length;
    int tCase;

    

    printf("Masukkan panjang array : \n");
    scanf("%d", &length);


    int array[length];

    inputArr(array, length);
    int max = maxVal(array, length);
    printf("\nnilai terbesarnya adalah : %d", max);
    int min = minVal(array, length);
    printf("\nnilai terkecil adalah : %d", min);
   



    return 0;
}
