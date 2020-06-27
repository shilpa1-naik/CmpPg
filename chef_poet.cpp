#include <iostream>

using namespace std;


int main() {
  int t;
  cin >> t;

  while(t--) {
    int a, b, cost, d;
    cin >> a >> b >> cost >> d;

    int pages_needed = a - b;
    bool lucky = false;
    while(d--) {
      int p,c;
      cin >> p >> c;

      if(c > cost || p < pages_needed){
	continue;
      } else  {
	lucky = true;
	// No break here :) COZ u will stop taking the input and miss it.
      }

      /*
      if( cost >= c && b+p>=a) {
	lucky = 1;
	break;
      }
      */
    }

    if(lucky) {
      cout << "LuckyChef\n";
    } else {
      cout << "UnluckyChef\n";
    }
  }
}
