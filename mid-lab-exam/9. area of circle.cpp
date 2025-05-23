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
    double x;
    Circle obj;
    cin>>x;
    obj.redius = x;;
    cout<<"Area : "<<obj.compute_area()<<endl;
}
