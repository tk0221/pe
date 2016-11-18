//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//Find the sum of all the primes below two million.
#include <iostream>
const int two_million = 2000000;
 
using namespace std;
int iamdumb[150000] ={2,0};
bool verify(long target, int lastPrime) {
  for (int i = 0; i < lastPrime; i++) {
    if(target%iamdumb[i] == 0) 
      return false;
  }
  return true;
}

int main() {
  int countPrime = 0;
  int start = 3;
  long answer = 2;
  while(start < two_million) {
    if(verify(start, countPrime)){
      answer += start;
      //cout << answer <<" cnt: "<<countPrime<< endl;
      iamdumb[++countPrime] = start++;
    }else{
      start++;
    }
  }

  cout <<"answer :" << answer << endl;
  return 0;
}

// 142913828922
// it is slow. it is