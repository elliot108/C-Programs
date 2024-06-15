#include <iostream>
using namespace std;
int main ()
{
    int i,a=0,b=1,n,c=1;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (n%2==0)
    {
        if (n==2)
        cout << a << ", " << b << endl;

        else 
        for (i=1; i<=n/2; i++)
        {
            cout << a << ", " << b << ", ";
            a+=b;
            b+=a;
        }
    }
    if (n%2!=0)
    {
        if (n==1)
        cout << a << endl;
        else
        {
            for (i=1; i<=n/2; i++)
            {
                cout << a << ", " << b << ", ";
                a+=b;
                b+=a;    
            }
            cout << a;
        }
    }
}
        