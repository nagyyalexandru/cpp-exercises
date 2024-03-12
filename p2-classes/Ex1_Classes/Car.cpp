#include "Car.h"
#include <iostream>

Car::Car()
{
    // std::cout << "-- Constructor call --" << std::endl;
    fuel = 0;
    speed = 0;
    passengers = 0;
}

Car::Car(float amount)
{
    fuel = amount;
    speed = 0;
    passengers = 0;
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
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
}

Car::~Car()
{
    // std::cout << "-- Deconstructor call --" << std::endl;
}