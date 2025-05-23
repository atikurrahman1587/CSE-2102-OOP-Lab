#include<iostream>
#include<math.h>
using namespace std;

class perfect
{
public:
    void check()
    {
        int n;
        cin>>n;

        int sum =1;

        for(int i = 2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                sum = sum+i+n/i;
            }
        }
        if(sum == n)
        {
            cout<<n<<" is a perfect number"<<endl;
        }
        else
        {
            cout<<n<<" is Not a perfect"<<endl;
        }
    }
};
int main()
{
    perfect obj;
    obj.check();

    return 0;
}
