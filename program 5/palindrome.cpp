#include <iostream>
using namespace std;
void rs (string& str)
    {
        int i;
        int n = str.length();
        for (i=0; i<(n/2); i++)
            {swap(str[i], str[n-i-1]);}
    }

// void reverseStr(string& str)
// {
//     int n = str.length();
  
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }

int main ()
{
    string str;
    int i,n;
    cout << "Enter a word: " << endl;
    cin >> str;
    string rss = str;
    rs (str);
    if (rss==str)
    cout << "The word you entered is palindrome." << endl;
    else 
    cout << "The word you entered is not palindrome." << endl;
    return 0;
}