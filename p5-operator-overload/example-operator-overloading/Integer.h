#pragma once
class Integer
{
    int *m_pInt;

public:
    /* THE RULE OF 3
    If user implements any of : Destructor, Copy Constructor, Copy Assignment Operator
    Then all of them are requiered to be implemented    */
    Integer();
    Integer(int value);
    // copy constructor
    Integer(const Integer &obj);
    int GetValue() const;
    void SetValue(int value);
    ~Integer();

    // operator overload '+'
    Integer operator +(const Integer &obj)const;

    // operator overload pre increment '++'
    Integer & operator ++();

    // operator overload post increment '++'
    Integer operator ++(int);

    // operator overload comparison operator '=='
    bool operator == (const Integer &obj)const;
};