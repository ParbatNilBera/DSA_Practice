// Print Palindrome in a given Range
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
  int range;
  cout << "Enter Range:\n";
  cin >> range;
  for (int i = 0; i <= range; i++)
  {
    if (checkPrime(i))
    {
      cout << i << " ";
    }
  }

  return 0; // End of program
}