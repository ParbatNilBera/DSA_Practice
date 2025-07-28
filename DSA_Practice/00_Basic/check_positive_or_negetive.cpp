// Check whether a given number is Positive or Negetive
#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter number to check Positive or Negetive:\n";
  cin >> number;

  if (number == 0)
  {
    cout << "Neutral\n";
    return 0;
  }

  (number < 0) ? cout << "Negetive" : cout << "Posive";

  return 0; // End of program
}