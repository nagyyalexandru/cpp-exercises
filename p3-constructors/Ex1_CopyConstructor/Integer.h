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
    Integer(Integer &obj);
    int GetValue() const;
    void SetValue(int value);
    ~Integer();
};