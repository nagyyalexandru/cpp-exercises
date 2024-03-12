#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void NewArrays()
{
    int *p = new int[5];

    for(int i = 0; i < 5; ++i)
    {
        p[i] = i;
    }

    delete []p;
}

int main(void)
{
    NewArrays();
    return 0;
}