#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
  cin >> t;

  while(t--){
    cin >> n;

    if (n % 2 == 0 && n % 7 == 0){
      cout << "Alice" << endl;
    }

    else if ( n%2 != 0 && n % 9 == 0){
      cout << "Bob" << endl;
    }
    else{
      cout << " Charlie" << endl;
    }

  }

	return 0;
}
