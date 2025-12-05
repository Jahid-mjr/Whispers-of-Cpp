#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,f;
    cin >> t;
    while (t--)
    {
        f = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
           

            if (f == -1)
                {
                    break;
                }
                

            for (int j = i+1; j < n; j++)
            {
                if (f == -1)
                {
                    break;
                }
                

                for (int k = j+1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == x)
                    {
                        f = -1;
                        break;
                    }
                    
                }
                
            }
            
        }

        if (f == 0)
        {
           cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
        
        
        
        





    }
    
    
    return 0;
}