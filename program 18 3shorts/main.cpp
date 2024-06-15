#include <iostream>
#include <math.h>
using namespace std;
//prime number
// int isprime(int num)
// {
//     bool prime{true};
//     if (num == 1)
//     {
//         prime = false;
//     }
//     else
//     { 
//         for (size_t i = 2; i < num; i++)
//         {
//             if (num%i == 0)
//             {
//                 prime = false;
//                 break;
//             }
//         }
//     }
//     return prime;
// }
// int main ()
// {
//     int int1, int2;
//     cout << "Enter two intervals" << endl;
//     cin >> int1 >> int2;
//     for (size_t i = int1+1; i < int2; i++)
//     {
//         if (isprime(i)==true)
//         {
//             cout << i << " " ;
//         }    
//     }
//     return 0;
// }

//common factor
// int main()
// {
//     int num1, num2;
//     cout << "Enter two integers" << endl;
//     cin >> num1 >> num2;
//     if (num1<num2)
//     {
//         for (size_t i = 2; i < num1; i++)
//         {
//             if (num1%i == 0 && num2%i == 0)
//             {
//                 cout << i << " " ;
//             }   
//         }
//     }
//     else if (num1>num2)
//     for (size_t i = 2; i < num2; i++)
//     {
//         if (num1%i == 0 && num2%i == 0)
//         {
//             cout << i << " " ;
//         }   
//     }
//     return 0;
// }

int main()
{

    float arr[10] = {5,6,9,8,7,10,9.8,2,3.3,4};
    float big = arr[0];
    for (size_t i = 1; i < 10; i++)
    {
        if (big < arr[i])
        {
            big = arr[i];
        }   
    }
    cout << "The elements in an array are ";
    for (auto values : arr)
    cout << values << "  ";
    cout << "\nLargest element : " << big;




    return 0;
}