#include <bits/stdc++.h>
using namespace std;

class University {
public:
    void func(int x) {
        cout << "value of x is " << x << endl;
    }

    void func(double x) {
        cout << "value of x is " << x << endl;
    }

    void func(int x, int y) {
        cout << "Value of x and y is " << x << ", " << y << endl;
    }
};

int main() {
    University ob;
    ob.func(7);
    ob.func(9.132);
    ob.func(85, 64);
    return 0;
}
