// The following iterative sequence is defined for the set of positive integers:

// n → n/2 (n is even)
// n → 3n + 1 (n is odd)

// Using the rule above and starting with 13, we generate the following sequence:

// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

#include <iostream>

using namespace std;

int collatz(long num) {
  int count = 1;

  while (num != 1) {
    count++;
    num = num % 2 == 0 ? num / 2 : num * 3 + 1;
    cout << num <<endl;
  }

  return count;
}

int main(){

  int datNumber = 0;
  int max = 0;

  for(int i = 1000000; i > 1; i--) {
  
    int tmp = collatz(i);
    if (max < tmp) {
      datNumber = i;
      max = tmp;
    }
  }

  cout << "datNumber : " << datNumber << endl;

  return 0;
}