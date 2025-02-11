#include<iostream>
using namespace std;
class Even{
public:
    int multiplicationOfEvenNumber(){
        int n, total_multiplication_of_even_number=1;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 == 0){
                total_multiplication_of_even_number *= i;
            }
        }
        return total_multiplication_of_even_number;
    }
};
int main()
{
    Even obj;
    int total_multiplication_of_even_number = obj.multiplicationOfEvenNumber();
    cout<<"Total multiplication of even number is: "<<total_multiplication_of_even_number<<endl;
}
