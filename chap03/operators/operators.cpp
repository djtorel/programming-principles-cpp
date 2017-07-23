#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter a floating-point value: ";
  double n;
  cin >> n;
  cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << '\n'; // another name for newline ("end of line") in output
  cout << "Please enter an integer: ";
  int n2;
  cin >> n2;
  cout << "n2 == " << n2
        << "\nn2 + 1 == " << n2+1
        << "\nthree times n2 == " << 3*n2
        << "\ntwice n2 == " << n2+n2
        << "\nn2 squared == " << n2*n2
        << "\nhalf of n2 == " << n2/2
        << "\nn2 % 2 == " << n2 % 2
        << '\n';
}
