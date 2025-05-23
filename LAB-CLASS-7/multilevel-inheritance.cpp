#include<iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout<<"This is from Vehicle class"<<endl;
    }
};
class FoureWheeler : public Vehicle{
public:
    FoureWheeler()
    {
        cout<<"This is from FourWheeler class"<<endl;
    }
};

class Car : public FoureWheeler {
public:
    Car(){
        cout<<"This is from Car class"<<endl;
    }
};
int main()
{
    Car obj;
    return 0;
}
