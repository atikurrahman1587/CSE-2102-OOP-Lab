#include <iostream>
using namespace std;
class year{
public:
    void isLeapYear(int year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            cout << year << " is a leap year."<<endl;
          }
          else {
            cout << year << " is not a leap year."<<endl;
          }
    }
};
int main() {

  year obj;
  int year;

  cout << "Enter a year: ";
  cin >> year;
  obj.isLeapYear(year);
  return 0;
}
