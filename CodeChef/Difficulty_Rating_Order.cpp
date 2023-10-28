#include <iostream>
using namespace std;

string check(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return "NO";
        }
    }
    return "YES";
}

int main() {
	// your code goes here
	  int t, len;
      cin >> t;

    while (t--)
    {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        cout << check(arr, len) << endl;
    }
	return 0;
}

