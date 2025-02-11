#include<iostream>
using namespace std;
class Triangle{
private:
    double base, height;
public:
    double compute_area(double b, double h){
        base = b;
        height = h;
        return 0.5*base*height;
    }
};
int main(){
    Triangle obj;
    double b, h;
    b = 10.50;
    h = 5.00;
    cout<<"Base is: "<<b<<endl;
    cout<<"Height is: "<<h<<endl;
    cout<<"Area of triangle is: "<<obj.compute_area(b ,h)<<endl;
}
