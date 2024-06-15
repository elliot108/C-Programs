#include <iostream>
using namespace std;
int main ()
{
    // float a,b,c;
    // cout << "Enter the degrees of three angles:" << endl;
    // cin >> a >> b >> c ;
    // if ((a+b+c)==180)
    // {
    //     cout << "These angles can make a triangle." << endl;
    // }
    // else
    // cout << "These angles cannot make a triangle. " << endl;

    // int y=0, x=6;
    // if (x>y)
    // {
    //     cout << x << " is greater than "  << y << endl;
    // }
    // if (x==6)
    // {
    //     cout << x << " is equal to " << 6 << endl;
    // }
    
    int arr[10];
    int num, count=0;
    cout << "Enter 10 integers: " << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "The integers you entered are : ";
    for (int value :  arr)
    cout << value << " ";
    cout << endl <<  "Enter a number you want to count :" << endl;
    cin >> num;
    for (size_t i = 0; i < 10; i++)
    {
        if (num==arr[i])
        {
            count++;
        }   
    }
    cout << num << " is counted for " << count << " times." << endl;
    return 0;
}