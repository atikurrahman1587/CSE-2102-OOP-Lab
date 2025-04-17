#include<iostream>
using namespace std;
class Rectangle {
public:
    double length, width;
    double compute_area(){
        return length*width;
    }
};
int main()
{
    Rectangle obj;
    obj.length = 10.5;
    obj.width = 5.00;
    cout<<"Length is: "<<obj.length<<endl;
    cout<<"Width is: "<<obj.width<<endl;
    cout<<"Area of rectangle is: "<<obj.compute_area()<<endl;
}
