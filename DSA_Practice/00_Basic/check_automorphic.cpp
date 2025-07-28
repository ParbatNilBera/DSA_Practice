#include <iostream>
using namespace std;

int isAutomorphic(int num)
{
  int square = num * num;
  while (num)
  {

    if (num % 10 != square % 10)
    {
      return false;
    }
    num /= 10;
    square /= 10;
  }

  return true;
}

int main()
{
  int number;
  cout << "Enter number TO check weather it is automorphic or not\n";
  cin >> number;
  if (isAutomorphic(number))
  {
    cout << number << " is automorphic";
  }
  else
  {
    cout << number << " is not automorphic";
  }
  return 0;
}