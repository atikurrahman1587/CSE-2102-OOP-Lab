#include<iostream>
#include<math.h>
using namespace std;
class Number{
public:
    void isPerfect(){
        int n, sum=1;
        cin>>n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                sum = sum+i+n/i;
            }
        }
        if(sum == n)
            cout<<"It's a perfect number"<<endl;
        else
            cout<<"It's not a perfect number"<<endl;
    }

};
int main()
{
    Number obj;
    obj.isPerfect();
    return 0;
}
