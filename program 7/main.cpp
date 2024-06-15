#include <iostream>
using namespace std;
int main ()
{
    int number;
    int l;
    int k{0};
    cout << "Enter a number : " << endl;
    cin >> number;
        do
        {
            l++;
            for (size_t j{1}; j<=10; ++j)
            {       
                cout << number*(j+k) << " ";    
            }
            k += 10 ;
            cout << endl;    
        } while (l<20);
    return 0;
}