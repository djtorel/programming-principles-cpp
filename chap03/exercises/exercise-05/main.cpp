/**
 * Modify the previous exercise to take doubles instead of ints
 */

#include <iostream>
using namespace std;

int main() {
  cout << "Enter value 1: ";
  double val1{};
  cin >> val1;
  cout << "Enter value 2: ";
  double val2{};
  cin >> val2;

  // Find larger and smaller value
  double larger{}, smaller{};
  if (val2 > val1) {
    larger = val2;
    smaller = val1;
  } else {
    larger = val1;
    smaller = val2;
  }

  // Find sum
  double sum{val1 + val2};

  // Find difference
  double difference{larger - smaller};

  // Find product
  double product{val1 * val2};

  // Find ratio
  double ratio{larger / smaller};

  cout << '\n'
       << "Larger " << larger << '\n'
       << "Smaller " << smaller << '\n'
       << "Sum " << sum << '\n'
       << "Difference " << difference << '\n'
       << "Product " << product << '\n'
       << "Ratio " << ratio << '\n';
}