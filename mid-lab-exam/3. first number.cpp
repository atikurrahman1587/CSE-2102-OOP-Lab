#include<iostream>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, first_one, last_one, temp;
        cin>>n;
        first_one = n%10;
        cout<<first_one<<endl;
    }
};

int main()
{
    Number obj;
    obj.calculations();
}
