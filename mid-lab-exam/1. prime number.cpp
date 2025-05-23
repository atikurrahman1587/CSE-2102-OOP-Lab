#include<iostream>
#include<math.h>
using namespace std;
class Number{
public:
    int isPrime()
    {
        int n, flag = 1;
        cin>>n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                flag = 0;
                break;
            }
        }
        return flag;
    }
};
int main()
{
    Number obj;
    if(obj.isPrime() == 1){
        cout<<"Prime"<<endl;
    } else {
        cout<<"Not a prime"<<endl;
    }
}
