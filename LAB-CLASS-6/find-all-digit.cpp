#include<iostream>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, last_one;
        cin>>n;
        while(n != 0){
            last_one = n%10;
            cout<<last_one<<endl;
            n = n/10;
        }
    }
};

int main()
{
    Number obj;
    obj.calculations();
}
