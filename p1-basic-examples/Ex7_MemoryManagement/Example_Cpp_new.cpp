#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void Malloc()
{
    int *p = (int*)malloc(5 * sizeof(int));
    if(p == NULL)
    {
        printf("Failed to allocate memory\n");
        return ;
    }

    *p = 5;
    printf("%d\n", *p);
    
    free(p);
}

void New()
{
    int *p = new int(5);
    *p = 6;
    std::cout << *p << std::endl;
    delete p;
    p = nullptr;
}

int main(void)
{
    // Malloc();
    New();
}