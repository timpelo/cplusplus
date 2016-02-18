#include <string>
#include <vector>
#include "car.h"
#include "customer.h"
#ifndef SHOP
#define SHOP

using namespace std;

class Shop
{
private:
    vector<Customer*> customerList_;
    vector<Car*> carList_;
    
public:
    Shop();
    ~Shop();
    void AddCar(Car* car);
    void AddCustomer(Customer* customer);
    void RemoveCar(int carNumber);
    void RemoveCustomer(int customerId);
    Customer* FindCustomer(int customerId);
    bool RentCar(int customerId, int carId);
};

#endif