// Fibonacci series
#include <iostream>
using namespace std;
int main()
{
  int range, firstTearm = 1, secondTerm = 1, sum = 0;
  cout << "Enter range to print fibonicci series\n";
  cin >> range;
  cout << sum << " ";
  cout << firstTearm << " ";
  cout << secondTerm << " ";
  for (int i = 3; i <= range; i++)
  {

    sum = firstTearm + secondTerm;
    firstTearm = secondTerm;
    secondTerm = sum;
    cout << sum << " ";
  }

  return 0; // End of program
}