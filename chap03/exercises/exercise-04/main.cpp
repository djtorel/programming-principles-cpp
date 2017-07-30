/**
 * Write a program that prompts the user to enter two integer values. Store these
 * values in int variables named val1 and val3. Write your program to determine
 * the smaller, larger, sum, difference, product, and ratio of these values and
 * report them to the user.
 */

#include <iostream>
using namespace std;

int main() {
  cout << "Enter value 1: ";
  int val1{};
  cin >> val1;
  cout << "Enter value 2: ";
  int val2{};
  cin >> val2;

  // Find larger and smaller value
  int larger{}, smaller{};
  if (val2 > val1) {
    larger = val2;
    smaller = val1;
  } else {
    larger = val1;
    smaller = val2;
  }

  // Find sum
  int sum{val1 + val2};

  // Find difference
  int difference{larger - smaller};

  // Find product
  int product{val1 * val2};

  // Find ratio
  double ratio{double(larger) / smaller};

  cout << '\n'
       << "Larger " << larger << '\n'
       << "Smaller " << smaller << '\n'
       << "Sum " << sum << '\n'
       << "Difference " << difference << '\n'
       << "Product " << product << '\n'
       << "Ratio " << ratio << '\n';
}