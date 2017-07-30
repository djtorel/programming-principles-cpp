/**
 * Write a program that converts from miles to kilometers. Your program should
 * have a reasonable prompt for the user to enter a number of miles. Hint: There
 * are 1.60934 kilometers to the mile.
 */

#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number of miles: ";
  double miles{};
  cin >> miles;
  double kilometers{miles * 1.60934};

  cout << '\n'
        << miles << " miles is " << kilometers << " kilometers.\n";
}