#include <iostream>

int Add(int *a, int *b);                  // Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); // Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b);                // Swap the value of two integers
void Factorial(int *a, int *result);      // Generate the factorial of a number and return that through the second pointer argument

int main()
{
    int num1 = 5, num2 = 10;
    int sum = Add(&num1, &num2);
    std::cout << "Sum: " << sum << std::endl;

    int sum_val;
    AddVal(&num1, &num2, &sum_val);
    std::cout << "Sum (through third pointer): " << sum_val << std::endl;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    Swap(&num1, &num2);
    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    int factorial_result;
    Factorial(&num1, &factorial_result);
    std::cout << "Factorial of num1: " << factorial_result << std::endl;

    return 0;
}

int Add(int *a, int *b)
{
    return *a + *b;
}

void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Factorial(int *a, int *result)
{
    *result = 1;
    for (int i = 1; i <= *a; ++i)
    {
        *result *= i;
    }
}