#include<iostream>
using namespace std;
class EvenOdd{
    public:
    void check(){
        int n;
        cin>>n;
        for(int i = 2; i <= n; i+=2){
            cout<<i<<endl;
        }

    }
};
int main()
{
    EvenOdd obj;
    obj.check();
}
