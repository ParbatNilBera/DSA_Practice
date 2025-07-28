// Check whether a given number is even or odd
#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter number to check Even or odd:\n";
  cin >> number;

  (number % 2 == 0) ? cout << "Even" : cout << "Odd";

  return 0; // End of program
}