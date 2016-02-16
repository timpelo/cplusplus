#include <iostream>
#include <string>
#include "car.h"
#include "customer.h"

using namespace std;

int main()
{
    
    Car* car = new Car("audi");
    Customer* customer = new Customer("jaakko", 5);
    
    cout << car->GetBrand() << endl;
    cout << customer->GetName() << " " << customer->GetId() << endl;
    
    delete car;
    delete customer;
    car = NULL;
    
    return 0;
}