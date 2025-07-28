// Check that is a number prime or not
#include <iostream>
using namespace std;

bool checkPrime(int num)
{
  if (num < 2)
    return false;
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int number;
  cout << "Enter a Number to check prime:\n";
  cin >> number;
  checkPrime(number) ? cout << "Prime Number" : cout << "not a prime";
}