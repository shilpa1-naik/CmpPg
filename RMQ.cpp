#include <iostream>

using namespace std;

// O(n^2) preprocessing step to create a lookup table , then constant time lookup
// Space complexity - O(n^2)

int N = 9;
int M = 9;
void print_arr(int *arr[N]) {
  for(int i=0;i<N;++i){
    for(int j=0;j<M;++j) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}
int main() {

  int arr[9]={2,50,9,3,11,45,23432,56,1};

  int *lookup[9];
  for(int i=0;i<N;++i) {
    lookup[i] = new int[N];
  }
  for(int i=0;i<N;++i) {
    int min = INT_MAX;
    for(int j=i;j<M;++j) {
      if(arr[j] < min) {
	min = arr[j];
      }
      lookup[i][j] = min;      
    }

  }

  //  print_arr(lookup);

  // QUERIES:

  // 1. [0,4]
  cout << lookup[0][4] << "\n";
}
