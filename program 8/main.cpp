#include <iostream>
using namespace std;
int main ()
{
    int leftsum =0;
    int rightsum =0;
    int number,i;
    int array[6];
    int index;
    cout << "Enter the numbers in an array : " << endl;
    for (size_t i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
        for (size_t k = 0; k < 6; k++)
        {
            leftsum = 0;
            for (size_t i=0 ; i < k+1; i++)
            {
            
            leftsum+=array[i];
                rightsum = 0;
                for (size_t j = 5; j > i+1; --j)
                    {
                        
                        rightsum+=array[j];
                    }
            index = i+1;
            }
            if (leftsum == rightsum) break;
        }
        cout << index;
    return 0;
}   
         


