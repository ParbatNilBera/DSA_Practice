#include <iostream>
using namespace std;
int main()
{
  int range;
  cout << "Enter range to print sum of n natural number:\n";
  cin >> range;
  cout << range * (range + 1) / 2 << " ";
  return 0; // End of program
}