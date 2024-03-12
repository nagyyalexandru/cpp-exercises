#include "Integer.h"

Integer::Integer()
{
    m_pInt = new int(0);    // allocate memory and store 0
}

Integer::Integer(int value)
{
    m_pInt = new int(value);    // allocate memory and store 'value'
}

Integer::Integer(const Integer &obj)
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

Integer Integer::operator+(const Integer & obj) const
{
    Integer temp;
    *temp.m_pInt = *m_pInt + *obj.m_pInt;
    return temp;
}

Integer &Integer::operator++()
{
    ++(*m_pInt);
    return *this;
}

Integer Integer::operator++(int)
{
    Integer temp(*this);
    ++(*m_pInt);
    return temp;
}

bool Integer::operator==(const Integer &obj) const
{
    return *m_pInt == *obj.m_pInt;
}
