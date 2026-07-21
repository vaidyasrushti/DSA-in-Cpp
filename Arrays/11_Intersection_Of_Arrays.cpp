#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;

    int arr1[n1];

    for(int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;

    int arr2[n2];

    for(int i = 0; i < n2; i++)
        cin >> arr2[i];

    set<int> s;

    for(int i = 0; i < n1; i++)
        s.insert(arr1[i]);

    cout << "Intersection: ";

    for(int i = 0; i < n2; i++)
    {
        if(s.find(arr2[i]) != s.end())
        {
            cout << arr2[i] << " ";
            s.erase(arr2[i]);
        }
    }

    return 0;
}