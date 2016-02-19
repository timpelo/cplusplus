#include <iostream>
#include <string>
#include <vector>
#include "customer.h"
#include "shop.h"
#include "car.h"

using namespace std;

Shop::Shop()
{
    cout << "Shop created" << endl;
}

Shop::~Shop()
{
    const int carArraySize = carList_.size();
    
    for(int i = 0; i < carArraySize; i++)
    {
        if(carList_.at(i) != NULL) {
            
            delete carList_.at(i);
        }
    }
    const int customerArraySize = customerList_.size();
    
    for(int i = 0; i < customerArraySize; i++)
    {
        if(customerList_.at(i) != NULL) {
            delete customerList_.at(i);
        }
    }

    cout << "Shop removed" <<endl;
}

void Shop::AddCar(Car* car)
{
    carList_.push_back(car);
    cout << "Car " << car->GetBrand() << " added." << endl;
}

void Shop::AddCustomer(Customer* customer)
{
    customerList_.push_back(customer);
    cout << "Customer " << customer->GetName() << " added." << endl;
}

void Shop::RemoveCar(int carNumber)
{
    if((unsigned)carNumber < carList_.size())
    {
        delete carList_.at(carNumber);
        carList_.erase(carList_.begin() + carNumber);
    }
}

void Shop::RemoveCustomer(int customerId)
{
    if((unsigned)customerId < customerList_.size())
    {
        delete customerList_.at(customerId);
        customerList_.erase(customerList_.begin() + customerId);
    }
}

Customer* Shop::FindCustomer(int id)
{
    Customer* result = NULL;
    const int arraySize = customerList_.size();
    
    for(int i = 0; i < arraySize; i++)
    {
        Customer* temp = customerList_.at(i);
        if(temp->GetId() == id)
        {
            result = customerList_.at(i);
        }
        
        temp = NULL;
    }
    
    return result;
}

bool Shop::RentCar(Customer* cust, Car* car)
{

    if(car->GetAvailable())
    {
        cust->SetRentCar(car);
        car->SetAvailable(false);
        return true;
    }
    
    return false;
}

void Shop::PrintInfo()
{
    cout << "-------------------------" << endl;
    cout << "------CAR HOUSE INFO-----" << endl;
    cout << "-------------------------" << endl;
    const int carArraySize = carList_.size();
    for(int i = 0; i < carArraySize; i++)
    {
        if(carList_.at(i) != NULL) {
            Car* temp = carList_.at(i);
            cout << "Car " << temp->GetBrand();
            
            if(temp->GetAvailable()) {
                cout << " is available." << endl;
            } else {
                cout << " is unavailable." << endl;
            }
            temp = NULL;
        }
    }
    
    const int customerArraySize = customerList_.size();
    for(int i = 0; i < customerArraySize; i++)
    {
        if(customerList_.at(i) != NULL) {
            Customer* temp = customerList_.at(i);
            
            if(temp->GetRentCar() != NULL) {
                cout << "Customer " << temp->GetName() << " has rented " << temp->GetRentCar()->GetBrand() << endl;
            } else {
                cout << "Customer " << temp->GetName() << " has not rented any car" << endl;
            }
            
            temp = NULL;
        }
    }
    
    cout << "-------END OF INFO------" << endl;
}