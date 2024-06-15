#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    char oper, fraction, ans;
    double a,b,c,d;
    do {
    cout << "Enter the first fraction, operator and second fraction: ";
    cin >> a >> fraction >> b >> oper >> c >> fraction >> d;
    switch (oper)
    {
    case '+': cout << "sum "<< (a*d + b*c) << fraction << (b*d)  ;
        break;
    case '-': cout << "Subtraction " << (a*d-b*c) << fraction << (b*d);
        break;
    case '*': cout << "multiplication  " << (a*c) << fraction << (b*d);
        break;
    case '/': 
    if (a!=0 && c!=0)
    {cout << "divisible = " << (a*d) << fraction << (b*c);}
    else {cout << "Maths not defined.";}
        break;
    }
    cout << " \n Do you want to do another fraction? ";
    cin >> ans;
    }while (ans !='n');
    
    return 0;
}