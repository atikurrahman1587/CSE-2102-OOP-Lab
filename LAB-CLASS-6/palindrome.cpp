#include<iostream>
using namespace std;
class Number{
public:
    void calculations()
    {
        int n, r, temp, rev= 0;
        cin>>n;
        temp = n;
        while(temp != 0){
            r = temp%10;
            rev = rev*10+r;
            temp = temp/10;
        }
        if(n == rev){
            cout<<n<<" is a palindrome"<<endl;
        }else {
            cout<<n<<" is not a palindrome"<<endl;
        }

    }
};

int main()
{
    Number obj;
    obj.calculations();
}
