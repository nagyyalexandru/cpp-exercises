#include "Integer.h"

Integer::Integer()
{
    m_pInt = new int(0);    // allocate memory and store 0
}

Integer::Integer(int value)
{
    m_pInt = new int(value);    // allocate memory and store 'value'
}

Integer::Integer(Integer &obj)
{
    m_pInt = new int(*obj.m_pInt);
}

int Integer::GetValue() const
{
    return *m_pInt;     // return the value at the address of 'm_pInt'
}

void Integer::SetValue(int value)
{
    *m_pInt = value;    // assign the value of 'm_pInt'
}

Integer::~Integer()
{
    delete m_pInt;
}
