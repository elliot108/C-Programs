#include <iostream>
using namespace std;
int main ()
{
    int a, count;
    cout << "Enter a number: ";
    cin >> a;
    for (count=0; a>0; count++)
    {
        a=a/10;
    }
    cout << "Number of digits: "<< count;
    
    
    return 0;
}