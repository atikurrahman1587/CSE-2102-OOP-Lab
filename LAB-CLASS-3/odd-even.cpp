#include<iostream>
using namespace std;
void oddEven(int x){
    if(x%2 == 0){
        cout<<"This is a even number";
    }else {
        cout<<"This is a odd number";
    }
}
int main()
{
    int x;
    cin>>x;
    oddEven(x);
}
