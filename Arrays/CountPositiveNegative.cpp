#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, -5, 20, -8, 0, 15, -2};
    int n = 7;

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}