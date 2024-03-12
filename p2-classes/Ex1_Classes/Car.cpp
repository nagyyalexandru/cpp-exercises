#include "Car.h"
#include <iostream>

int Car::totalCount = 0;

// ilustrating the Delegating Constructors for C++ 11
Car::Car():Car(0)
{
    // constructor for 0 parameters
    std::cout << "Constructor Car()" << std::endl;
    // when this constr. is executed, it will jump to the next one
}

Car::Car(float amount):Car(amount, 0)
{
    std::cout << "Constructor Car(float amount)" << std::endl;
    // after this constr. is executed, it will jump to the next one
}

Car::Car(float amount, int pass)
{
    // finally, this constr. is executed
    std::cout << "Constructor Car(float amount, int pass)" << std::endl;
    ++totalCount;
    fuel = amount;
    speed = 0;
    passengers = pass;
}

Car::~Car()
{
    --totalCount;
    std::cout << "-- Deconstructor call --" << std::endl;
}

void Car::FillFuel(float amount)
{
    fuel = amount;
}

void Car::Accelerate()
{
    speed++;
    fuel -= 0.5f;
}

void Car::Brake()
{
    speed = 0;
}

void Car::AddPassengers(int count)
{
    passengers = count;
}

void Car::Dashboard()const
{
    std::cout << "Fuel : " << fuel << std::endl;
    std::cout << "Speed:  " << speed << std::endl;
    std::cout << "Passengers : " << passengers << std::endl;
}

void Car::ShowCount()
{
    std::cout << "Total Cars : " << totalCount << std::endl;
}
