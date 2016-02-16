#include <string>
#ifndef CAR
#define CAR

using namespace std;

class Car
{

private:
    string brand_;
    
public:
    Car(string brand);
    ~Car();
    void SetBrand(string brand);
    string GetBrand();
};

#endif