// Find all Palindrome Numbers in a given range
#include <iostream>
using namespace std;

bool CheckPalindrome(int num)
{
  int revNum = 0, org = num;
  while (num)
  {
    revNum = (num % 10) + revNum * 10;
    num = num / 10;
  }

  if (revNum != org)
    return false;
  return true;
}
int main()
{
  int range, totalCount = 0;
  cout << "Enter Range to print Palindrome:\n";
  cin >> range;
  // Check for invalid or non-positive input
  if (range <= 0)
  {
    cout << "Please enter a number greater than 0.\n";
    return 0;
  }
  for (int i = 1; i <= range; i++)
  {
    if (CheckPalindrome(i))
    {
      cout << i << " ";
    }
  }

  return 0; // End of program
}