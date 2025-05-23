#include<iostream>
using namespace std;

class palindrome
{
public:
    void check()
    {
        int num,original,reminder,reversed=0;
        cin>>num;
        original=num;

        while(original != 0)
        {
          reminder = original%10;
          reversed= reversed*10+reminder;
          original= original/10;
        }
        if(num == reversed)
        {
            cout<<"this is palindrome"<<endl;
        }
        else
        {
            cout<<"this is not a palindrome"<<endl;
        }
    }
};
int main()
{
    palindrome obj;
    obj.check();

    return 0;
}
