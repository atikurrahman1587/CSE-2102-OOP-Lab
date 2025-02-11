#include<iostream>
using namespace std;
class Even{
public:
    int sumOfEvenNumber(){
        int n, total_sum_of_even_number=0;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 == 0){
                total_sum_of_even_number += i;
            }
        }
        return total_sum_of_even_number;
    }
};
int main()
{
    Even obj;
    int total_sum_of_even_number = obj.sumOfEvenNumber();
    cout<<"Total sum of even number : "<<total_sum_of_even_number<<endl;
}
