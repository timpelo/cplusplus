#include <iostream>
#include <string>
#include "car.h"
#include "customer.h"
#include "shop.h"

using namespace std;

int main()
{
    
    Shop* shop = new Shop();
    
    Customer* guy1 = new Customer("jaakko", 0);
    Customer* guy2 = new Customer("henri", 1);
    
    Car* car1 = new Car("mersu");
    Car* car2 = new Car("audi");
    
    shop->AddCar(car1);
    shop->AddCar(car2);
    
    shop->AddCustomer(guy1);
    shop->AddCustomer(guy2);
    
    shop->RemoveCustomer(0);
    

    cout << shop->FindCustomer(1)->GetName() << endl;

    delete shop;
    
    
    return 0;
}