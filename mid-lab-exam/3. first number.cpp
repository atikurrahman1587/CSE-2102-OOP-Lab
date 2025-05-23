#include<iostream>
using namespace std;
class Number{
public:
    void firstNumber()
    {
        int n, first_one;
        cin>>n;
        while(n != 0){
            first_one = n%10;
            n = n/10;
        }
        cout<<first_one<<endl;
    }
};

int main()
{
    Number obj;
    obj.firstNumber();
}
