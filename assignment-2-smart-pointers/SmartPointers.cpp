#include <iostream>
#include <memory>

class Foo
{
public:
    Foo()
    {
        std::cout << "Foo created" << std::endl;
    }

    ~Foo()
    {
        std::cout << "Foo destroyed" << std::endl;
    }

    void msg()
    {
        std::cout <<"Hello from Foo() !" << std::endl;
    }
};

int main(void)
{
    // Example using Shared Pointer
    std::shared_ptr<Foo> sharedFoo = std::make_shared<Foo>();

    std::cout << "Shared pointer count: " << sharedFoo.use_count() << std::endl;

    std::shared_ptr<Foo> sharedFoo2 = sharedFoo;
    std::cout << "Shared pointer count: " << sharedFoo.use_count() << std::endl;

    std::cout << "Shared pointer count: " << sharedFoo.use_count() << std::endl;

    // Example using Unique Pointer
    std::unique_ptr<Foo> uniqueFoo = std::make_unique<Foo>();
    uniqueFoo->msg();   // Accessing member function

    // This line won't compile, demonstrating exclusive ownership
    // std::unique_ptr<Foo> uniqueFoo2 = uniqueFoo; 
    return 0;
}