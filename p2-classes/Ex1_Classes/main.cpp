#include "Car.h"

int main (void)
{
    Car car(4);
    // car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.AddPassengers(4);
    car.Dashboard();
    return 0;
}