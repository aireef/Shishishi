#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int even = 0;

    int array[3] = {1,2,3};

    for (int i = 1; i <= 3; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        
    }

    printf("%d", even);
    
    return 0;
}
