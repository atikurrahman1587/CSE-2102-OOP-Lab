#include<bits/stdc++.h>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, r, sum = 0;
        cin>>n;
        while(n != 0){
            r = n%10;
            sum += r;
            n = n/10;
        }
        string str_sum = to_string(sum);
        int final_sum = 0;
        for(int i = 0; i < str_sum.length(); i++){
            int num = str_sum[i] - '0';
            final_sum += num;
        }
        cout<<final_sum;
    }
};

int main()
{
    Number obj;
    obj.calculations();
}
