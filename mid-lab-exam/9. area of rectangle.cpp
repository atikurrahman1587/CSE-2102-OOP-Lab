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
    double l, w;
    Rectangle obj;
    cin>>l>>w;
    obj.length = l;
    obj.width = w;
    cout<<"Area: "<<obj.compute_area()<<endl;
}
