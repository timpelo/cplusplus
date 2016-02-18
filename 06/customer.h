#include <string>
#include "car.h"
#ifndef CUSTOMER
#define CUSTOMER

using namespace std;

class Customer
{

private:
    string name_;
    int id_;
    Car* rentCar_;

public:
    Customer(string name, int id);
    ~Customer();
    void SetName(string name);
    string GetName();
    void SetId(int id);
    int GetId();
    bool SetRentCar(Car* car);
    Car* GetRentCar();
};

#endif