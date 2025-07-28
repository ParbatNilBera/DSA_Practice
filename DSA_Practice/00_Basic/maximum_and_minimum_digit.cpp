#include <iostream>
#include <climits>
using namespace std;
int main()
{
  int number;
  int min = INT_MAX, max = INT_MIN;
  cout << "Enter number to check maxium and minimum number\n";
  cin >> number;
  int calNum = number;
  while (calNum)
  {
    int buffer = calNum % 10;
    if (buffer > max)
      max = buffer;
    if (buffer < min)
      min = buffer;
    calNum /= 10;
  }

  cout << "Maximum:" << max << endl;
  cout << "Minimum:" << min << endl;

  return 0; // End of program
}