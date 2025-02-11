#include<iostream>
using namespace std;
class Even{
public:
    int checkTotalEven(){
        int n, total_even_number=0;
        cin>>n;
        for(int i = 1; i <= n; i++){
            if(i%2 == 0){
                total_even_number += 1;
            }
        }
        return total_even_number;
    }
};
int main()
{
    Even obj;
    int total_even_number = obj.checkTotalEven();
    cout<<"Total Even number is: "<<total_even_number<<endl;
}
