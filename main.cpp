#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 cout << setprecision (2) << fixed;
 
 int count;
 int num;
 int average;
 int sum = 0;
 
  for (count = 1; count <=4; count++)
  {
  
  cout << "Enter a number" << endl;
  cin >> num;
  sum = sum + num;
  }
  average = sum / 4;


  cout << "The average of the four numbers is " << average << endl;


  
}