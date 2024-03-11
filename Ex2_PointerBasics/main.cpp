#include <iostream>

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments

int main(void)
{
    int num1 = 5, num2 = 10;
    int sum = 0;
    Add(num1, num2, sum);
    std::cout << "Sum = " << sum << std::endl;

    int factorial_result;
    Factorial(num1, factorial_result);
    std::cout << "Factorial of " << num1 << " = " << factorial_result << std::endl;

    std::cout << "Variables before swapping : num1 = " << num1 << ", num2 = " << num2 << std::endl;
    Swap(num1, num2);
    std::cout << "Variables after swapping : num1 = " << num1 << ", num2 = " << num2 << std::endl;
    return 0;
}

void Add(int a,int b, int &result)
{
    result = a + b;
}

void Factorial(int a, int &result)
{
    result = 1;
    for(int i = 1; i <= a; ++i)
    {
        result *= i;
    }
}

void Swap(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
