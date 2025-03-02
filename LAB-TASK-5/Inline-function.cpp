#include<iostream>
#define PI 3.1416
using namespace std;
inline float AREA_OF_CIRCLE(float radius)
{
    return PI*radius*radius;
}
int main()
{
    cout<<"Enter radius of circle :"<<endl;
    float r;
    cin>>r;
    cout<<"Area of circle: "<<AREA_OF_CIRCLE(r)<<endl;
    return 0;
}
