#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    /*int a{1}, b{2};
    cout << a << ", "<< (a+=b)<< ", " << (a+=(b+=4))<< ", " << (a+=(b+=4))<< ", " << (a+=(b+=4))<< ", " 
    << (a+=(b+=4))<< ", " << (a+=(b+=4))<< ", " << (a+=(b+=4))<< ", " << (a+=(b+=4))<< ", " << (a+=(b+=4))<< ", "<<"...";*/

    int i,n=0;
    cout<< "How many numbers do you want to print?: ";
    cin >> n;
    for (i=0; i<n; i++)
    {
        cout<<2*pow(i,2)+1<<" ";
    }
    return 0;
}