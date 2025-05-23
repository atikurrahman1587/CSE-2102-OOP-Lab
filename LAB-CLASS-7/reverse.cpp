#include<iostream>
using namespace std;

class reversed
{
public:
    void check()
    {
        int num,r,rev=0;
        cin>>num;

        while(num != 0)
        {
            r=num%10;
            rev=rev*10+r;
            num = num/10;
        }
        cout<<rev<<endl;

    }
};
int main()
{
    reversed obj;
    obj.check();

    return 0;
}
