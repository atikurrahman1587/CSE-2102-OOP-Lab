//#include<iostream>
//#include<math.h>
#include<bits/stdc++.h>
using namespace std;
class Number{
public:
    void divisors(){
        int n;
        cin>>n;
        for(int i = 1; i <= sqrt(n); i++){
            if(n%i == 0){
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }

};
int main()
{
    Number obj;
    obj.divisors();
    return 0;
}
