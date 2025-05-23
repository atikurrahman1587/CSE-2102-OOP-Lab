#include<iostream>
using namespace std;
class State
{
public:
    State()
    {
        cout<<"This is a State University"<<endl;
    }
};
class Dept : public State
{

};
int main()
{
    Dept obj;

    return 0;
}
