#include<iostream>
#include<math.h>
using namespace std;
class Number{
public:
    void divisors()
    {
        int n;
        cin>>n;
        for(int i = 2; i <= n/2; i++){
            if(n%i == 0){
                cout<<i<<endl;
            }
        }
    }
};
int main()
{
    Number obj;
    obj.divisors();
}
