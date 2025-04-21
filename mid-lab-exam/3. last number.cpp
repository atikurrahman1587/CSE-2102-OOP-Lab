#include<iostream>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, last_one, temp;
        cin>>n;
        last_one = n%10;
        cout<<last_one<<endl;
    }
};

int main()
{
    Number obj;
    obj.calculations();
}
