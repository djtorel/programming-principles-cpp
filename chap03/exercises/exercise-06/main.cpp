/**
 * Write a program that prompts the user to enter three integer values, and then
 * outputs the values in numerical sequence separated by commas.
 */
#include <iostream>
using namespace std;

int findLargest(int num, int largest);
int swapNumber(int num1, int num2, int buffer);

int main() {
  cout << "Enter three integers: ";
  int num1{}, num2{}, num3{};
  cin >> num1 >> num2 >> num3;

  // Initializing smallest, middle, and largest to make it easier to sort
  int smallest{num1}, middle{num2}, largest{num3};

  // Creating buffer, comparing "smallest" to "largest", if smallest is larger
  // then swap using buffer.
  int buffer{largest};
  largest = findLargest(smallest, largest);
  smallest = swapNumber(smallest, largest, buffer);

  // Compare largest to middle, if middle is actually larger, use buffer to swap
  // them. We should now know the true largest number
  buffer = largest;
  largest = findLargest(middle, largest);
  middle = swapNumber(middle, largest, buffer);

  // Compare middle to smallest, if smallest is larger then swap using buffer
  // We should now know the true smallest and middle values.
  buffer = middle;
  middle = findLargest(smallest, middle);
  smallest = swapNumber(smallest, middle, buffer);
 
  cout << '\n'
       << smallest << ", "
       << middle << ", "
       << largest << '\n';
}

int findLargest(int num, int largest) {
  return num > largest ? num : largest;
}

int swapNumber(int num1, int num2, int buffer) {
  return num1 == num2 ? buffer : num1;
}