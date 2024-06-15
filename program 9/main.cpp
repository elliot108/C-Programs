#include <iostream>
using namespace std;
int main ()
{
    int n, sum;
    cout << "enter the numbers of integers in the array : " << endl;
    cin >> n;
    cout << "enter the integers of the array" << endl;
    int arr[n];
    int count=0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the desired amount of sum : " << endl;
    cin >> sum;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if ((arr[i]+arr[j]) == sum )
            { 
                count++;
                cout << arr[i] <<" + "<< arr[j] << endl;
            }
        }    
    }
    if (count == 1)
    {
         cout << count << " pair has the sum up to " << sum << endl;
    }
    else
        cout << count << " pairs have the sum up to " << sum << endl;

    return 0;
}