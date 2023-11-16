#include <iostream>
using namespace std;

int checkforaddy(int arr[], int n)
{

    int streakaddy = 0;
    int temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp2++;
        }
        else
        {
            streakaddy = max(streakaddy, temp2);
            temp2 = 0;
        }
    }
    streakaddy = max(streakaddy, temp2);

    return streakaddy;
}

int checkforom(int arr[], int n)
{
    int streakom = 0;
    int temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp1++;
        }
        else
        {
            streakom = max(streakom, temp1);
            temp1 = 0;
        }
    }
    streakom = max(streakom, temp1);

    return streakom;
}

int main()
{
    // your code goes here
    int t;
    int n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        int arr1[n];
        int arr2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        int om = checkforom(arr1, n);
        int addy = checkforaddy(arr2, n);

        if (om > addy)
        {
            cout << "Om" << endl;
        }
        else if (om < addy)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
