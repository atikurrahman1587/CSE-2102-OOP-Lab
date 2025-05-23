#include<iostream>
using namespace std;

class Encapsulation
{
private:
    int x;

public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation obj;
    int x;
    cin>>x;
    obj.set(x);
    cout << obj.get() << endl;
    return 0;
}
