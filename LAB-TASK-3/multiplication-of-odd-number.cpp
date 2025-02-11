#include<iostream>
using namespace std;
class Odd{
public:
    int multiplicationOfOddNumber(){
        int n, total_multiplication_of_odd_number=1;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 != 0){
                total_multiplication_of_odd_number *= i;
            }
        }
        return total_multiplication_of_odd_number;
    }
};
int main()
{
    Odd obj;
    int total_multiplication_of_odd_number = obj.multiplicationOfOddNumber();
    cout<<"Total multiplication of odd number is: "<<total_multiplication_of_odd_number<<endl;
}
