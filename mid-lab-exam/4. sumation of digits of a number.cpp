#include<iostream>
using namespace std;
class Number{
public:
    void sumOfNumber()
    {
        int n, r, sum = 0;
        cin>>n;
        while(n != 0){
            r = n%10;
            sum += r;
            n = n/10;
        }
        cout<<sum<<endl;
    }
};

int main()
{
    Number obj;
    obj.sumOfNumber();
}
