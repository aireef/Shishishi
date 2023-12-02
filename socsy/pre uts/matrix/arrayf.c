#include <stdio.h>



int input(int length, int array[]){

    printf("masukkan isi array : \n");

    for (size_t i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Isi dari array adalah : \n");

    for (size_t i = 0; i < length; i++)
    {
        printf("%d", array[i]);
    }

    printf("\n");
    
   return 0; 

}

int maxArr(int length, int array[]){

    int max = array[0];
    
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    return max;
    
}

int minArr(int length, int array[]){

    int min = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        
    }
    return min;
    
}


int main()
{
    int arrLength;
    printf("Masukkan panjang array : \n");

    scanf("%d", &arrLength);

    int array[arrLength];

    input(arrLength, array);

    int maxArray = maxArr(arrLength, array);

    printf("Angka terbesar dari array adalah : \n%d\n", maxArray);

    int minArray = minArr(arrLength, array);

    printf("Angka terkecil dari array adalah : \n%d\n", minArray);
    return 0;
}
