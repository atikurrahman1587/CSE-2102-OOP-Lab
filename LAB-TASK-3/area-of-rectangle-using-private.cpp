#include<iostream>
using namespace std;
class Rectangle {
private:
    double length, width;
public:
    double compute_area(double l, double w){
        length = l;
        width = w;
        return length*width;
    }
};
int main()
{
    Rectangle obj;
    double l, w;
    w = 10.5;
    l = 5.00;
    cout<<"Length is: "<<w<<endl;
    cout<<"Width is: "<<l<<endl;
    cout<<"Area of rectangle is: "<<obj.compute_area(l, w)<<endl;
}
