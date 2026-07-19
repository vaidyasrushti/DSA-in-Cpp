#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {10, 25, 18, 50, 7};
    int n = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}