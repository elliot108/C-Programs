#include <iostream>
using namespace std;
int main ()
{
    int num, hai;
    cout << "Enter a number : " << endl;
    cin >> num;
    cout << num << " ";
    while (num!=1)
    {
        if(num%2==0)
        {
            hai = num/2;
            cout << hai << " ";
            num = hai;
        }
        else
        {
            hai = num*3+1;
            cout << hai << " ";
            num = hai;
        }
        
    }
    
    return 0;
}