#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car(string brand) : brand_(brand)
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