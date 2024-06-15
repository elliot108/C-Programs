#include <iostream>
using namespace std;
int main ()
{
    int num{0};
    for (int i = 1; i <= 15; i++)
    {
        cout << num << "\t" ;
        if(i%3==0)
        {
            cout << endl;
            for (size_t j = 0; j < i/3; j++)
            {
                cout << "\t" ;
            }    
        }
        num+=5;
    } 
    return 0;
}