#include <iostream>
using namespace std;
int getDigit(int number)
{
  if (number == 0)
    return 1;
  int value = 0;
  while (number)
  {
    value++;
    number /= 10;
  }
  return value;
}

int pow(int num, int time)
{
  if (time == 0)
    return 1;
  int value = num;
  for (int i = 1; i < time; i++)
  {
    value = value * num;
  }
  return value;
}

bool checkArmstrong(int num, int digit)
{
  int checkArm = num;
  int value = 0;
  while (checkArm)
  {
    int buffer = pow(checkArm % 10, digit);
    value = value + buffer;
    checkArm = checkArm / 10;
  }
  if (value == num)
  {
    return true;
  }
  return false;
}
int main()
{
  int number;
  cout << "Enter a number to check weater it is Armstrong or not \n";
  cin >> number;
  int digit = getDigit(number);
  checkArmstrong(number, digit) ? cout << "Armstrong number" : cout << "Not an armstrong number";

  return 0; // End of program
}