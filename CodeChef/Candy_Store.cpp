#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin >> t;
	int ans;
	
	while(t--){
	    cin >> x >> y;
	    if (x >= y){
	        cout << y << endl;
	    }
	    else{
	        ans = (y-x)*2 + x;
	        cout << ans << endl;
	    }
	}
	return 0;
}
