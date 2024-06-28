/*
  Function
  - Built-In Functions
  --- Algorithm Header
  ------ min
  ------ max
  ------ count

  - Create 3 Applications
  --- Find Minimum Number
  --- Find Maximum Number
  --- Count Number Occurance
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  cout << min(10, -20) << "\n";                       // -20
  cout << min(10, 20) << "\n";                        // 10
  cout << min('a', 'c') << "\n";                      // a
  cout << min('a', 'C') << "\n";                      // C
  cout << int('a') << "\n";                           // 97
  cout << int('C') << "\n";                           // 67
  cout << min({10, -20, 30, -100, 100, -50}) << "\n"; // -100
  cout << "=======================\n";
  cout << max(10, -20) << "\n";                       // 10
  cout << max(10, 20) << "\n";                        // 20
  cout << max('a', 'c') << "\n";                      // c
  cout << max('a', 'C') << "\n";                      // a
  cout << int('a') << "\n";                           // 97
  cout << int('C') << "\n";                           // 67
  cout << max({10, -20, 30, -100, 100, -50}) << "\n"; // 100
  cout << "=======================\n";

  int nums[] = {10, -20, 30, -100, 100, -50};
  int numsSize = size(nums);
  int checkMinNum = 0;

  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] < checkMinNum)
    {
      checkMinNum = nums[i];
    }
  }

  cout << checkMinNum << "\n";

  cout << "=======================\n";

  int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
  int numsTwoSize = size(numsTwo);
  int counter = 0;
  int choosenNum = 10;

  for (int i = 0; i < numsTwoSize; i++)
  {
    if (numsTwo[i] == choosenNum)
    {
      counter++;
    }
  }

  cout << choosenNum << " Found " << counter << " Times";

  return 0;
}
