#include <iostream>
using namespace std;
int main ()
{
    int count2{1};
    int count1{8};
    for (size_t i = 1; i <=5 ; i++)
    {
        for (size_t k = 0; k <= count1; k++)
        {
            cout << " " ;
        }

        for (size_t j = 1; j <= count2; j++)
        {
            cout << "*" ;
        }
        cout << endl;
        count1 = 8 - count2;
        count2 *=2;
    }
    for (int p = 0; p < 5; p++)
    {
        for (int m = 0; m < (p+4); m++)
        {
            cout << " " ;
        }
        for (int n = 10; n > p*2; n--)
        {

            cout << "*";

        }
        cout << endl;

    }
    cout << "         *";

    return 0;
}
