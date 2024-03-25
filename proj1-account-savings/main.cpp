#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include <typeinfo>

int main(void)
{
    Checking chk("Frank", 200, 80);
    
    Transact(&chk);

    return 0;
}
