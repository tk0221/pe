//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
using namespace std;
// 1 isnt really worth it 
//              2,3      2,4   3     5
//              6     7  8     9     10
int arr[] = {11,12,13,14,16,17,18,19,20};

int validator(int in) {
  for (int i = 0; i < 9; i++) {
    if (in % arr[i] != 0) {
      return 0;
    }
  }
  return in;
}
int main() {
  
  int result = 0;
  int i = 0;
  while (result == 0) {
    i++;
    result = validator(i*20);
  }
  
 
  cout << "ANSWER : " << result << endl; //232792560
  return 0;
}
