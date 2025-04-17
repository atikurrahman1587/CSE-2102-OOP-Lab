#include<iostream>
using namespace std;
class Odd{
public:
    int sumOfOddNumber(){
        int n, total_sum_of_odd_number=0;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 != 0){
                total_sum_of_odd_number += i;
            }
        }
        return total_sum_of_odd_number;
    }
};
int main()
{
    Odd obj;
    int total_sum_of_odd_number = obj.sumOfOddNumber();
    cout<<"Total sum of odd number : "<<total_sum_of_odd_number<<endl;
}
