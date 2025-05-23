#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Car Constructor" << endl;
    }
};
class Electric : virtual public Car {
public:
    Electric() {
        cout << "Electric Constructor" << endl;
    }
};
class Gasoline : virtual public Car {
public:
    Gasoline() {
        cout << "Gasoline Constructor" << endl;
    }
};
class Hybrid : public Electric, public Gasoline {
public:
    Hybrid() {
        cout << "Hybrid Constructor" << endl;
    }
};
int main() {
    Hybrid h;
    return 0;
}
