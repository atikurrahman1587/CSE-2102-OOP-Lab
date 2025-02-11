#include<iostream>
using namespace std;
class Odd{
public:
    int checkTotalOdd(){
        int n, total_odd_number=0;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 != 0){
                total_odd_number += 1;
            }
        }
        return total_odd_number;
    }
};
int main()
{
    Odd obj;
    int total_odd_number = obj.checkTotalOdd();
    cout<<"Total odd number is: "<<total_odd_number<<endl;
}
