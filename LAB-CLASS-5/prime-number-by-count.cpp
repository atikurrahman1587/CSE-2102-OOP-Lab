#include<iostream>
using namespace std;
class Prime{
public:
    void isPrime(){
        int n, Count = 0;
        cin>>n;
        for(int i = 2; i <= n; i++){
            if(n%i == 0){
                Count++;
            }
        }
        if(Count == 1){
            cout<<"Prime number"<<endl;
        } else {
            cout<<"Not a prime number"<<endl;
        }
    }
};
int main()
{
    Prime obj;
    obj.isPrime();

    return 0;
}
