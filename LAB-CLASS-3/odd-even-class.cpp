#include<iostream>
using namespace std;
class EvenOdd{
    public:
    void check(){
        int n, sum_of_even = 0, sum_of_odd = 0;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 == 0){
                sum_of_even += i;
                //cout<<i<<" ";
            } else {
                sum_of_odd += i;
                //cout<<endl<<i<<" ";
            }
        }
        cout<<endl<<"Sum Of Even Numbers "<<sum_of_even<<endl;
        cout<<"Sum Of Odd Numbers "<<sum_of_odd<<endl;
    }
};
int main()
{
    EvenOdd obj;
    obj.check();
}
