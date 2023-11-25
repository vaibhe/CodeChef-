#include <iostream>
using namespace std;

int main() {
	// your code goes here
  int t,n;
  string str;
  string ans;

  cin >> t;
  while (t--)
  {
    cin >> n;
    cin >> str;
    int i = 0;
  
    while (i < n)
    {
      if (str[i] == '0' && str[i + 1] == '0')
      {
        ans += 'A';
        i += 2;
      }

      else if (str[i] == '0' && str[i + 1] == '1')
      {
        ans += 'T';
        i += 2;
      }

      else if (str[i] == '1' && str[i + 1] == '0')
      {
        ans += 'C';
        i += 2;
      }

      else
      {
        ans += 'G';
        i += 2;
      }
    }
    cout << ans << endl;
    ans.clear();
    
  }
	return 0;
}

