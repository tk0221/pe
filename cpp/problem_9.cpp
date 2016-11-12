//For example, 3^2 + 4^2 = 9 + 16 = 2^5 = 5^2.

//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

//a<b<c
//1. a^2 + b^2 = c^2
//2. a+b+c = 1000 -> a+b = 1000-c



#include <iostream>
#include <math.h>       /* sqrt */

using namespace std;

bool verify(int a, int b) {
  int tmp = (a*a)+(b*b);
  int c = sqrt(tmp);
  bool condition1 = tmp == c*c;
  bool condition2 = a+b+c == 1000;
  return condition1 && condition2;
}
int main() {
  for (int i = 1 ; i < 500; i++) {
    for (int j = i+1; j < 500; j++) {
      if(verify(i, j)) {
        cout << "ANSWER: "<< i*j*(1000-i-j) << endl; //31875000
      }
    }
  }
  return 0;
}
