/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;

  if (age >= 18)
  {
    cout << "Your Age Is OK\n";
  }
  else
  {
    cout << "Your Age Is Not OK\n";
  }

  cout << (age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n");

  string msg = age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n";

  cout << msg;

  return 0;
}
/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/
---------------------------------------------------------------Nested ternarry Operator -------------------------------------
#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  int points = 450;

  if (age >= 18)
  {
    cout << "OK\n";
  }
  else
  {
    if (points >= 500)
    {
      cout << "OK Because Of Points\n";
    }
    else
    {
      cout << "No Age Or Points\n";
    }
  }

  cout << (age >= 18 ? "OK\n" : (points >= 500 ? "OK P\n" : "No P\n"));

  cout << (points >= 500 ? "OK P\n" : "No P\n");

  if (age >= 18)
    cout << "OK\n";
  else
    cout << "Not OK\n";

  return 0;
}
