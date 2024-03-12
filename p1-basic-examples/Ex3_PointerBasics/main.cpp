#include <iostream>

int main(void)
{
    int x = 5;
    const int MAX = 12;
    int &ref_x1 = x;
    const int &ref_x2 = x;

    const int *ptr1 = &x;
    int *const ptr2 = &x;
    const int *const ptr3 = &x;

    const int *ptr4 = &MAX; // Correct: Pointer to a constant integer can point to the address of a constant integer.
    const int *ptr5 = &MAX; // Correct: Pointer to a constant integer can point to the address of a constant integer.

    const int &r1 = ref_x1; // Correct: Reference to a constant integer can refer to a regular integer.
    const int &r2 = ref_x2;       // Correct: Reference to a non-constant integer can refer to a constant integer.

    const int *const &p_ref2 = ptr2;         // Correct: Reference to a constant pointer to an integer can refer to a regular pointer.

    return 0;
}
