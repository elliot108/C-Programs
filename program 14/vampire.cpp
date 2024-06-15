#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
int main()
{
    string v;
    cin >> v;
    int number = stoi(v);
    int count = size(v);

    if (count%2 !=0 || count==2)
    {
        cout << "NO vampire number!" << endl;
    }

    int f[200];
    int k{0};    

    if (count==4)
    {
         for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            if (i==j)
            {
                j++;
                if (j>=count)
                {
                    break;
                }    
            }
            stringstream ss;
            ss << v[i];
            ss << v[j];
            ss >> f[k] ;
            k++;
        }
    }

    for (size_t i = 0; i < k; i++)
    {
        for (size_t j = i+1; j < k; j++)
        {
            if ((f[i]*f[j]==number))
            {
                cout << f[i] << " x " << f[j] << endl;
            }
            
        }
        
    }
    }
    
    if (count==6)
    {
            for (size_t i = 0; i < count; i++)
            {
                if (v[i]=='0')
                {
                    break;
                }
                
                for (size_t j = 0; j < count; j++)
                {
            
                    for (size_t p = 0; p < count; p++)
                    {
                        if (i==j)
                    {
                        j++;
                        if (j>=count)
                        {
                            break;
                        }
                    }
                        if (i==p)
                        {
                            p++;
                            p++;
                            if (p>=count)
                            {
                                break;
                            }
                        }
                        if (j==p)
                        {
                            p++;
                            if (p>=count)
                            {
                                break;
                            }
                        }
                        
                            stringstream ss;
                            ss << v[i];
                            ss << v[j];
                            ss << v[p];
                            ss >> f[k];
                            k++;
                    }
            
                }
            }
    for (size_t i = 0; i < k; i++)
    {
    for (size_t j = i+1; j < k; j++)
    {
        if ((f[i]*f[j]==number))
        {
        cout << f[i] << " x " << f[j] << endl;
        exit(0);
        }
    }
        
    }
    cout << "No vampire number!" << endl;
    }
    
    


    return 0;
}
