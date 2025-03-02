#include<iostream>
using namespace std;
class Rectangle {
private:
    double length;
public:
    double width;
    double compute_area(double l){
        length = l;
        return length*width;
    }
};
int main()
{
    Rectangle obj;
    obj.width = 10.00;
    double l;
    l = 5.00;
    cout<<"Width is: "<<obj.width<<endl;
    cout<<"Length is: "<<l<<endl;
    cout<<"Area of rectangle is: "<<obj.compute_area(l)<<endl;
}
