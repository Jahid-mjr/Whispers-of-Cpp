#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    string a,b;

    cin >> t;
    while (t--)
    {
        cin >> a >> b;
  
        int in = a.find(b);

        while (in != -1)
        {
            a.replace(in,b.size(),"#");
            in = a.find(b,in+1);


        }
        
        








        cout << a << endl;


        



        
    }
    
    
    return 0;
}