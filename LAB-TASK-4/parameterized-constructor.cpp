#include<iostream>
using namespace std;
class SUB
{
private:
    int x, y;
public:
    SUB(int xl, int yl)
    {
        x = xl;
        y = yl;
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
    SUB obj(10, 20);
    cout<<"1st number is: "<<obj.getX()<<endl;
    cout<<"2nd number is: "<<obj.getY()<<endl;
}
