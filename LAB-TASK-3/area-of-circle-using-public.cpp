#include<iostream>
using namespace std;
class Circle {
public:
    double redius;
    double compute_area(){
        return 3.1416*(redius*redius);
    }
};
int main()
{
    Circle obj;
    obj.redius = 10.5;
    cout<<"Radius is: "<<obj.redius<<endl;
    cout<<"Area of circle is: "<<obj.compute_area()<<endl;
}
