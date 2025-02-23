#include<iostream>
using namespace std;
class SUB
{
private:
    int x, y;
public:
    SUB()
    {
        x = 10;
        y = 20;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    SUB obj;
    cout<<"1st number is: "<<obj.getX()<<endl;
    cout<<"2nd number is: "<<obj.getY()<<endl;
}
