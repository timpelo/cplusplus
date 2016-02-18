#include <string>
#ifndef CAR
#define CAR

using namespace std;

class Car
{

private:
    string brand_;
    bool available_;
    
public:
    Car(string brand);
    ~Car();
    void SetBrand(string brand);
    string GetBrand();
    void SetAvailable(bool isAvailabe);
    bool GetAvailable();
};

#endif