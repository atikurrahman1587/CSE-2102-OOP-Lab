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
    Triangle obj;
    obj.base = 10.50;
    obj.height = 5.00;
    cout<<"Base is: "<<obj.base<<endl;
    cout<<"Height is: "<<obj.height<<endl;
    cout<<"Area of triangle is: "<<obj.compute_area()<<endl;
}
