#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car(string brand) : brand_(brand), available_(false)
{
    cout << "Car " << brand << " is created." << endl;
}

Car::~Car() 
{
    cout << "Car " << brand_ << " is deleted." << endl;
}

void Car::SetBrand(string brand)
{
    brand_ = brand;
    cout << "Brand changed to " << brand << endl;
}

string Car::GetBrand()
{
    return brand_;
}

void Car::SetAvailable(bool isAvailable)
{
    available_ = isAvailable;
}

bool Car::GetAvailable()
{
    return available_;
}