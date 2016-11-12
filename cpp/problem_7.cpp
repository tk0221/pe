//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?

#include <iostream>

using namespace std;
int iamdumb[10001] ={2,0};
bool verify(int target, int lastPrime) {
  for (int i = 0; i < lastPrime; i++) {
    if(target%iamdumb[i] == 0) 
      return false;
  }
  return true;
}

int main() {
  int countPrime = 0;
  int start = 3;
  while(countPrime != 10000) {
    if(verify(start, countPrime)){
      iamdumb[++countPrime] = start++;
    }else{
      start++;
    }
  }
  cout << "ANSWER : " << iamdumb[10000] << endl; 

  return 0;
}