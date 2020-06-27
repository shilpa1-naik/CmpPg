#include <iostream>
#include <algorithm>

using namespace std;
int count1 = 0;
bool all_same(int* arr, int n) {
  if(n ==0 )
    return true;
  int val = arr[0];
  for(int i=1; i<n;++i) {
    if(arr[i] != val)
      return false;
  }
  return true;
}

void equify(int* arr, int n) {
  //  sort(arr, arr+n); TLE n*n*log n
  int max = arr[0];
  int max_index = 0;
  for(int i=1;i<n;++i) {
    if(arr[i] > max){
      max = arr[i];
      max_index = i;
    }
  }
  int min = arr[0];
  int min_index = 0;
  for(int i=1;i<n;++i) {
    if(arr[i] < min) {
      min = arr[i];
      min_index  = i;
    }
  }
  int diff = max - min;
  count1 += diff;
  for(int i=0;i<n;++i) {
    if(i != max_index) {
      arr[i]+=diff;
    }
  }
  
}

void print_arr(int* arr, int n) {
  for(int i=0;i<n;++i) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i) {
      cin >> arr[i];
    }
    count1 = 0;
    bool same = all_same(arr, n);
    while(!same) {
      equify(arr, n);
      //           print_arr(arr, n);
      same = all_same(arr, n);
    }
    cout << count1 << "\n";
  }
}
