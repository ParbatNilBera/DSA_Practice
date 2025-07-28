#include <iostream>
using namespace std;
int factorial(int num)
{
  int ans = 1;
  if (num == 0 || num == 1)
    return 1;

  for (int i = num; i > 0; i--)
  {
    ans = ans * i;
  }
  return ans;
}

bool isStrong(int num)
{
  int ans = 0, buff = num;
  while (buff)
  {
    ans = ans + factorial(buff % 10);
    buff = buff / 10;
  }

  if (ans == num)
  {
    return true;
  }
  return false;
}
int main()
{
  int number;
  cout << "Enter number TO check weather it is strong or not\n";
  cin >> number;
  if (isStrong(number))
  {
    cout << number << " is strong";
  }
  else
  {
    cout << number << " is not strong";
  }
  return 0;
}