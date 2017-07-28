/**
 * After each step run program to make sure it is doing what's expected
 * 1) Write a program that produces a simple form letter. Prompt to "Enter name
 *  of the person you want to write to", store in first_name and output to 
 *  "Dear first_name,".
 * 
 * 2) Add an introductory line like "How are you? I am fine". Be sure to indent
 *  the first line. Add a few more lines of my choosing.
 * 
 * 3) Prompt user for the name of another frind, store in friend_name. Add a line
 *  To letter: "Have you seen friend_name lately?"
 * 
 * 4) Declare a char variable called friend_sex and initialize its value to 0.
 *  Prompt the user to enter an 'm' if friend is male and 'f' if the friend is female.
 *  Assign the value entred to friend_sex. Then use two if-statements to write the
 *  following:
 *    If friend is male, "If you see friend_name please ask him to call me."
 *    If friend is female, "Iff you see friend_name please ask her to call me."
 * 
 * 5) Prompt the user to enter the age of the recipient and assign it to an int
 *  variable, age. Have your program write "I hear you just had a birthday and you
 *  are age years old." If age is 0 or less or 100 or more, call
 *  simple_error("You're kidding!") using simple_error() from std_lib_facilities.h
 * 
 * 6) Add this to letter:
 *  If friend is under 12, write "Nex year you will be age+1."
 *  If friend is 17, write "Next year you will be able to vote."
 *  If friend is over 70, write "I hope you are enjoying retirement."
 *  Check program to make sure it response appropriately.
 * 
 * 7) Add "Yours sincerely," followed by two blank lines for a signature, followed
 *  by my name.
 *  
 */
#include "std_lib_facilities.h"

int main()
{
  cout << "Enter the name of the person you want to write to:\n";
  string first_name{};
  cin >> first_name;

  cout << "Enter name of another friend:\n";
  string friend_name{};
  cin >> friend_name;

  cout << "Enter gender of friend, m for male, f for female:\n";
  char friend_sex{};
  cin >> friend_sex;
  string friend_message{};
  if (friend_sex == 'm') {
    friend_message = "If you see " + friend_name + " please as him to call me.";
  } else if (friend_sex == 'f') {
    friend_message = "If you see " + friend_name + " please as her to call me."; 
  }

  cout << "How old is your friend?\n";
  int age{};
  cin >> age;
  string age_message{};
  if (age >= 110 || age <= 0) {
    simple_error("You're kidding!");
  } else if (age >= 70) {
    age_message = "I hope you're enjoying retirement.";
  } else if (age == 17) {
    age_message = "Next year you will be able to vote.";
  } else if (age <= 12) {
    age_message = "Next year you will be " + to_string(age + 1) + '.';
  }

  cout << "Dear " << first_name << ",\n"
        << "\tHow are you? I'm fine. What have you been up to? I have been learning\n"
        << "how to program in JavaScript, C++, HTML, and CSS. Have you seen "
        << friend_name << " lately?\n" << friend_message << ' ' << age_message << '\n'
        << "Yours sincerely,\n\nDominic Torruellas\n";
}