// Perfect Number Check
#include <iostream>
using namespace std;
int main()
{
  int number;
  int isPerfect = 0;
  cout << "Enter a number to check weather the number is perfect or not\n";
  cin >> number;

  if (number < 1)
  {
    cout << "Invalid number";
    return 0;
  }

  for (int i = 1; i <= number / 2; i++)
  {
    if (number % i == 0)
    {
      isPerfect += i;
    }
  }

  if (isPerfect == number)
  {
    cout << "Perfect ";
  }
  else
  {
    cout << "Not Perfect ";
  }
  return 0; // End of program
}