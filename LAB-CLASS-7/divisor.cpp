#include<iostream>
#include<math.h>
using namespace std;

class divi
{
public:
    void check()
    {
        int num;
        cin>>num;

        for(int i = 1; i<=sqrt(num); i++)
        {
            if(num%i == 0)
            {
                cout<<i<<" "<<num/i<<" ";
            }
        }
    }
};
int main()
{
    divi o;
    o.check();

    return 0;
}
