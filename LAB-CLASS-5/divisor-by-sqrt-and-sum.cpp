//#include<iostream>
//#include<math.h>
#include<bits/stdc++.h>
using namespace std;
class Number{
public:
    void divisors(){
        int n, sum=0;
        cin>>n;
        for(int i = 1; i <= sqrt(n); i++){
            if(n%i == 0){
                sum = sum+i+n/i;
            }
        }
        cout<<"Sum: "<<sum<<endl;
    }

};
int main()
{
    Number obj;
    obj.divisors();
    return 0;
}
