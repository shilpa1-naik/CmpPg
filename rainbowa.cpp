#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  int samp = 0;
  for(int i=1;i<8;++i) {
    samp = (samp | (1<<i));
  }

  int samp2 = 0;
  for(int i=1;i<3;++i) {
    samp2 = (samp2 | (1<<i));
  }
  
  while(t--) {
    int n;
    cin >> n;
    int i=0;
    int j=n-1;
    int arr[n];
    int bi = 0;

    for(int i=0;i<n;++i) {
      cin >> arr[i];
      bi = bi | (1<<arr[i]);
    }
    bool palin = true;
    while(i<=j) {
      if(arr[i] != arr[j] && ( arr[i]!=(arr[i-1]+1) ||arr[i]!=arr[i-1] )){
	palin = false;
	break;
      }
      i++;
      j--;
    }
    if(!palin || bi!=samp){
      cout << "no\n";
    } else {
      cout << "yes\n";
    }
  }
}
