#include <bits/stdc++.h>
using namespace std;
int main()
{

    int z;
    string x;
    char y[100000];
    while (getline(cin,x))
    {
        

        int j = 0;
        for (int i = 0; x[i] != '\0' ; i++)
        {
            if (x[i] != ' ')
            {
                y[j] = x[i];
                j++;
            }
            
            
            
        }
        y[j] = '\0';
        z = strlen(y);
        sort(y,y+z);

        for (int i = 0; i < z; i++)
        {
           cout << y[i];
        }
        
        cout << endl;


    }
    
    
    return 0;
}