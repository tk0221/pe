//Starting in the top left corner of a 2×2 grid, and only being able 
//to move to the right and down, there are exactly 6 routes to the bottom right corner.

//How many such routes are there through a 20×20 grid?

#include <iostream>

using namespace std;

long matrix[21][21] = {0};

int main(){
  for (int i = 0; i < 21; i++) {
    for (int j = 0; j < 21; j++) {
      if (i == 0 || j  == 0) {
        matrix[i][j] = 1;
      } else {      
        matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
      }
      //cout << "["<< i << "][" << j << "] " << matrix[i][j];
    }
    //cout << endl;
  }


  cout << "ans : " << matrix[20][20] << endl;
  return 0;
}