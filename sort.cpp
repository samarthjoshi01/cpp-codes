#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int key)
{
    int comparisons = 0;
    for (int i = 0; i < n; i++)
    {
        comparisons++;
        if (arr[i] == key)
        {
            cout << "Present " << comparisons << endl;
            return;
        }
    }
    cout << "Not Present " << comparisons << endl;
}

int main()
{
    int T;
    cout << "enter the no of test cases";
    cin >> T;
    while (T--)
    {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> key;
        linearSearch(arr, n, key);
    }
    return 0;
}
