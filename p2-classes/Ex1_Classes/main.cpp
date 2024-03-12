#include "Car.h"

int main (void)
{
    Car::ShowCount();
    
    Car car(4);
    // car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();

    car.AddPassengers(4);

    car.Dashboard();

    Car::ShowCount();
    return 0;
}