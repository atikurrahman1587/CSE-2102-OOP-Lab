#include<iostream>
using namespace std;
class Triangle{
public:
    double base, height;
    double compute_area(){
        return 0.5*base*height;
    }
};
int main(){
    double b, h;
    Triangle obj;
    cin>>b>>h;
    obj.base = b;
    obj.height = h;
    cout<<"Area: "<<obj.compute_area()<<endl;
}
