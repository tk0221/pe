// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
int LIMIT = 4000000; //worth it? hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
int fib() {
  int ans = 0;
  int i=0, j=1;

  while(j < LIMIT) {
    int current = i + j;
    i = j;
    j = current;
    if (current%2 == 0) {
      ans += current;
    }
  }
  return ans;//4613732
}

int main() {
  std::cout << "ANSWER : " << fib() << std::endl;
  return 0;
}
