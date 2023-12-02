#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
       if (arr[i]>max)
       {
        max = arr[i];
       }
       
    }
    printf("%d", max);
    
    return 0;
}
