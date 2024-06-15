#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string s;
    int count=0;
    cout << "Enter a string : ";
    cin >> s;
    for (auto value : s)
        count++;    
    for (size_t j = 0; j < count; j++)
    {
        for (size_t k = j+1; k < count; k++)
        {
            if (s[j]==s[k])
            {
                s.erase(k, 1);
                count--;
            }    
        }    
    }
    cout << s << endl;
    return 0;
}