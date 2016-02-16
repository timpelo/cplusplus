#include <string>
#ifndef CUSTOMER
#define CUSTOMER

using namespace std;

class Customer
{

private:
    string name_;
    int id_;

public:
    Customer(string name, int id);
    ~Customer();
    void SetName(string name);
    string GetName();
    void SetId(int id);
    int GetId();
};

#endif