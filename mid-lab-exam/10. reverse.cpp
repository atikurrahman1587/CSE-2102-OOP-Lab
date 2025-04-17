#include<iostream>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, r, rev= 0;
        cin>>n;
        while(n != 0){
            r = n%10;
            rev = rev*10+r;
            n = n/10;
        }
        cout<<rev<<endl;
    }
};

int main()
{
    Number obj;
    obj.calculations();
}
