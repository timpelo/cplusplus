#include <iostream>
#include <string>
#include "car.h"
#include "customer.h"
#include "shop.h"

using namespace std;
int main()
{
    Car* car = new Car("audi");
    Customer* jarmo = new Customer("Jarmo", 0);
    Shop* shop = new Shop();
    
    shop->AddCustomer(jarmo);
    shop->AddCar(car);
    
    shop->RentCar(0, 0);
    
    cout << car->GetAvailable() << endl;
    cout << jarmo->GetName() << " with " << jarmo->GetRentCar()->GetBrand() << endl;
}