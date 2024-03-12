#include "Car.h"
#include <iostream>

int Car::totalCount = 0;

Car::Car()
{
    // std::cout << "-- Constructor call --" << std::endl;
    ++totalCount;
    fuel = 0;
    speed = 0;
    passengers = 0;
}

Car::Car(float amount)
{
    ++totalCount;
    fuel = amount;
    speed = 0;
    passengers = 0;
}

Car::~Car()
{
    --totalCount;
    // std::cout << "-- Deconstructor call --" << std::endl;
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

void Car::Dashboard()
{
    std::cout << "Fuel : " << fuel << std::endl;
    std::cout << "Speed:  " << speed << std::endl;
    std::cout << "Passengers : " << passengers << std::endl;
}

void Car::ShowCount()
{
    std::cout << "Total Cars : " << totalCount << std::endl;
}
