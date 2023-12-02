#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr; 

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    *ptr = 6; 

    printf("stored value: %d\n", *ptr);

    free(ptr);

    return 0;
}
