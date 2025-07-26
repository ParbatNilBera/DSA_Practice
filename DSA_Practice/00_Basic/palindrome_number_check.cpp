// Check if a number is Palindrome or Not
#include <iostream>
using namespace std;

// Function to reverse a given integer
int reversedNumber(int num)
{
  int revNum = 0;
  // Loop until all digits are processed
  while (num)
  {
    // Extract the last digit and build the reversed number
    revNum = (num % 10) + revNum * 10;
    num = num / 10; // Remove the last digit
  }
  return revNum; // Return the reversed number
}

// Function to check if two numbers are the same
bool checkSame(int num1, int num2)
{
  if (num1 == num2)
    return true; // If both numbers are equal, return true
  return false;  // Otherwise, return false
}

int main()
{
  int number;

  // Prompt the user for input
  cout << "Enter number to check it is Palindrome or not:\n";
  cin >> number;

  // Handle edge case: negative numbers are not palindromes
  if (number < 0)
  {
    cout << "Negative numbers are not considered palindromes.\n";
    return 0; // Exit early
  }

  // Get the reversed version of the number
  int revNumber = reversedNumber(number);

  // Check if the original and reversed numbers are the same
  if (checkSame(number, revNumber))
  {
    cout << "Palindrome\n"; // If same, it's a palindrome
  }
  else
  {
    cout << "Not palindrome\n"; // If not same, it's not a palindrome
  }

  return 0; // End of program
}
