#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1, comparisons = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        comparisons++;

        if (arr[mid] == key)
        {
            cout << "Present " << comparisons << endl;
            return;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not Present " << comparisons << endl;
}

int main()
{
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;

    while (T--)
    {
        int n, key;
        cout << "Enter size of array: ";
        cin >> n;
        int arr[n];

        cout << "Enter sorted array elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Enter key element to search: ";
        cin >> key;

        binarySearch(arr, n, key);
    }

    return 0;
}
