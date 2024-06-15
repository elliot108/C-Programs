#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string pw;
    int score{0}, cu{0}, cl{0}, cd{0}, cs{0}, length{0};
    bool digit{false}, sym{false}, upp{false};
    bool lo{false};
    cout << "Enter your password : " << endl;
    cin >> pw;
    length = size(pw);
    cout << boolalpha;
    if (length>=8)
    {
            for (size_t i = 0; i < length; i++)
            {
                if (isalpha(pw[i])==1)
                {
                    upp=true;
                    cu++;
                }
                else if (isalpha(pw[i])==2)
                {
                    lo = true;
                    cl++;
                }
                else
                {
                    if (isdigit(pw[i])==true)
                    {
                        digit = true;
                        cd++;
                    }
                    else
                    {
                        sym=true;
                        cs++;
                    }                    
                }    
            }
        if (((upp==true && lo==true && digit==true)||(sym==true && upp==true && lo == true) || (upp==true && digit==true && sym==true)
        ||(lo==true && sym==true && digit==true))==false)
        {
            cout << "Your password must include atleast 3 of these characters: uppercase, lowercase, digit and symbol" << endl;
        }
        else
        {
            if (cu<=0)
            {
                score = ( 8 + length*4 +(length-cl)*2 + cd*4 + cs*6);
            }
            else if (cl<=0)
            {
                score = ( 8 + length*4 +(length-cu)*2 + cd*4 + cs*6);
            }
            else if (cd<=0)
            {
                score = ( 8 + length*4 +(length-cu)*2 + (length-cl)*2 + cs*6);
            }
            else if (cs<=0)
            {
                score = ( 8 + length*4 +(length-cu)*2 + (length-cl)*2 + cd*4);
            }
        }
        
        if (upp==true && lo==true && digit == true && sym == true)
        {
            score =( 10 + length*4 + (length-cu)*2 + (length-cl)*2 + cd*4 + cs*6 );
        }
        
    }    
    else
    {
        cout << "Your password must be at least 8 characters long. " << endl;
    }

    if (score >=100)
    {
        cout << "Scores : 100" << endl << "Very Strong" << endl;
    }
    else
    {
        cout << "Scores : " << score << endl;
        if (score>0 && score<=20)
        {
            cout << "Very weak" << endl;
        }
        else if (score>20 && score <=40)
        {
            cout << "Weak" << endl;
        }
        else if (score>40 && score <=60)
        {
            cout << "Good" << endl;
        }
        else if (score>60 && score <=80)
        {
            cout << "Strong" << endl;
        }
        else if (score>80 && score <=100)
        {
            cout << "Very strong" << endl;
        }    
    }
    
    
    
    
    

    
    
    
    
    

    return 0;
} 