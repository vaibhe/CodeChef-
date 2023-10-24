#include <iostream>
using namespace std;

string valid(int num)
{
    int count = 0;
    int store;
    while (num != 0)
    {
        store = num % 10;
        count++;
        num /= 10;
    }
    if (count == 5)
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;

    while (t--)
    {
        cin >> x >> y;

        int num = x * y;
        cout << valid(num) << endl;
    }
    return 0;
}
