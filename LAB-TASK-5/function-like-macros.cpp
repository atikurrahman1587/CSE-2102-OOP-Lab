#include<iostream>
using namespace std;
#define PI 3.1416
#define AREA_OF_CIRCLE(radius)(PI*radius*radius)
int main()
{
    cout<<"Enter radius of circle :"<<endl;
    int r;
    cin>>r;
    cout<<"Area of circle: "<<AREA_OF_CIRCLE(r)<<endl;
    return 0;
}
