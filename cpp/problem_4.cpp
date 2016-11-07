//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
using namespace std;

bool isPalindromic(int n){
  int digit, rev = 0;
  int num = n;
  do{ 
    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num / 10;
  } while (num != 0);
  return n==rev ? true : false;
}

int main(){
  int max = 0;
  //3 digit and I assume its around here
  //still not efficient IMO
  for(int i = 900; i < 1000; i++) {
    for(int j = 900; j < 1000; j++) {
      int tmp = i * j;
      max = isPalindromic(tmp) ? tmp : max;
    }
  }
  cout <<"ANSWER : " << max << endl; //906609 
  return 0;
}
