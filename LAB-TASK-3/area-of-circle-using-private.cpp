#include<iostream>
using namespace std;
class Circle {
private:
    double redius;
public:
    double compute_area(double r){
        redius = r;
        return 3.1416*(redius*redius);
    }
};
int main()
{
    Circle obj;
    double r = 10.5;
    cout<<"Radius is: "<<r<<endl;
    cout<<"Area of circle is: "<<obj.compute_area(r)<<endl;
}
