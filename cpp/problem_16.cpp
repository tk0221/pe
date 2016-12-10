// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

// What is the sum of the digits of the number 2^1000?


#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>

using namespace std;

int main(){
  int result = 0;
  double tar = pow(2, 1000);
  std::ostringstream strs;
  strs << setprecision(400) << tar << endl;;
  std::string str = strs.str();

  for(int i = 0; i < str.length() - 1; i++)
    result += str[i] - '0';

  cout << "ans : " << result << endl;

  return 0;
}
