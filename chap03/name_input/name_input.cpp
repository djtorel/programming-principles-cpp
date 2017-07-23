#include "std_lib_facilities.h"

int main() {
  cout << "Please enter your first and second name (folowed by 'enter'):\n";
  string first_name = "???";    // first_name is a variable of type string
                                // ("???" means "don't know the name")
  string second_name = "???";
  cin >> first_name >> second_name;    // read characters into first_name
  cout << "Please enter your age: ";
  int age = -1;   // integer variable (-1 means "don't know age")
  cin >> age;
  int age_months = age * 12;
  cout << "Hello, " << first_name << " " << second_name << " (age " << age << " years, or " << age_months << " months)!\n";
}