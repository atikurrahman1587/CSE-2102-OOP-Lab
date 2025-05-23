#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "Eating bread..." << endl;
    }
};

int main(void) {
    Dog d = Dog();
    d.eat();
    return 0;
}
