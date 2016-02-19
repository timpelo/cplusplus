#include <iostream>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "car.h"

using namespace std;

int main() {
    
    Car* car1 = new Car("Audi");
    Car* car2 = new Car("Mersu");
    Car* car3 = new Car("Bemari");
    
    Customer* cust1 = new Customer("Harri", 0);
    Customer* cust2 = new Customer("Samu", 1);
    Customer* cust3 = new Customer("Sini", 2);
    
    Shop* carHouse = new Shop();
    
    carHouse->AddCar(car1);
    carHouse->AddCar(car2);
    carHouse->AddCar(car3);
    
    carHouse->AddCustomer(cust1);
    carHouse->AddCustomer(cust2);
    carHouse->AddCustomer(cust3);
    
    carHouse->RentCar(cust2, car3);
    
    carHouse->PrintInfo();
    
    delete carHouse;
    
    return 0;
}