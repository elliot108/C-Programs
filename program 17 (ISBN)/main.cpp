#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
int main ()
{ 
    stringstream ss;
    bool resume{true};
    int set, digit[10], miss=0, sum=0, m_point=0, rem=-1; 
    int k=0, n_sum{0};
    cout << "Enter the number of data sets" << endl;
    cin >> set;
    string strr[100];
    for (size_t i = 0; i < set; i++)
    {
        cin >> strr[i];    
    }
    for (size_t j = 0; j < set; j++)
    {
        sum =0; n_sum=0; m_point=0; miss=0; rem =-1; resume =true;
        ss << strr[j];
        string str;
        ss >> str;
        ss.clear();
        if (size(str)!=10)
        {
            cout << "Invalid input" << endl;
            resume = false;
        }
        else
        {
            for (size_t i = 0; i < 9; i++)
            {
                if (isdigit(str[i])==true)
                {
                    digit[i] = int(str[i])-48;
                    sum+= digit[i]*(i+1);
                }
                else
                {
                    if (str[i] == '?')
                    {
                        miss = i+1;
                    }
                    else
                    {
                        cout << "Invalid input" << endl;
                        resume = false;
                        sum =0;
                        n_sum = 0;
                        break;
                    }    
                }    
            }      
        }
        if (resume==true)
        {
           
            if (isdigit(str[9])==true)
            {
                if (miss == 0)
                {
                    cout << "There is no missing point" << endl;
                }
                else
                {
                    rem = int(str[9])-48;
                }
            }
            else if (str[9]=='X')
            {
                
                rem = 10;
            }
            else if (str[9]=='?')
            {
                m_point = sum%11;  
                ss << m_point;
                ss >> str[9];
                ss.clear();
            }   
            for (size_t i = 1; i < 82; i++)
            {   
                if (rem == -1)
                {
                    break;
                }
                
                else if (sum%11 == rem)
                {
                    break;
                }
                else
                {
                    n_sum = sum + i;
                    if (n_sum%11 == rem)
                        {
                            if (i%miss == 0)
                            {
                                m_point = i/miss;
                                if (m_point >9)
                                {
                                    m_point=0;
                                }
                                sum =0;
                                n_sum=0;
                                break;
                            }
                            
                        }
                }
                    
            }
            ss.clear();
            if (m_point == 10)
            {
                cout << "Missing digit: X  " ;
                str[9] = 'X';
            }
            else
            {
                cout << "Missing digit: " << m_point << "  ";
                if (miss>0)
                {
                    ss << m_point;
                    ss >> str[miss-1];
                }
                
            }
            cout << "Full ISBM: ";
            cout << str;
            cout << endl;  
            }
    }
     return 0;
}
