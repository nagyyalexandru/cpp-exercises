#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int *p = (int *)calloc(1, sizeof(int));  // calloc initialize members to 0
    int *p = (int *)malloc(sizeof(int));    // malloc does not initialize members

    if(p == NULL)
    {
        printf("Failed to allocate memory\n");
        return -1;
    }

    *p = 5;

    printf("%d\n", *p);

    free(p);

    // p = NULL;
    // free(p);

    return 0;
}