#include<iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};
class FoureWheeler {
public:
    FoureWheeler()
    {
        cout<<"This is a 4 wheeler vehicle"<<endl;
    }
};

class Car : public Vehicle, public FoureWheeler {

};
int main()
{
    Car obj;
    return 0;
}
