#include <iostream>
#include <string>
#include "customer.h"

using namespace std;

Customer::Customer(string name, int id) : name_(name), id_(id)
{
    cout << "Customer " << name_ << " created." << endl;
}

Customer::~Customer()
{
    cout << "Customer " << name_ << " destroyed." << endl;
}

string Customer::GetName()
{
    return name_;
}

int Customer::GetId()
{
    return id_;
}

void Customer::SetName(string name)
{
    name_ = name;
}

void Customer::SetId(int id)
{
    id_ = id;
}

