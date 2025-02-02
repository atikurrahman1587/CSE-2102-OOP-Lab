#include<iostream>
#include<stdbool.h>
using namespace std;
bool checkIsLeapYear(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            } else {
                return false;
            }
        }
        return true;
    }
    return false;
}
int main(){
    int year;
    cin>>year;
    if(checkIsLeapYear(year)){
        cout<<"This year is a leap year";
    } else {
        cout<<"This year is not a leap year";
    }
}
