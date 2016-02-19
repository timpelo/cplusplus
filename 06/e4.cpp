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
    
    shop->RentCar(jarmo, car);
    
    cout << jarmo->GetName() << " drives with " << jarmo->GetRentCar()->GetBrand() << endl;
    
    delete shop;
    
    return 0;
}