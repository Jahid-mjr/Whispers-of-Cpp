#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string a,b, c = "Jessica";
    int f = 0;
    getline(cin,a);

    stringstream ss(a);
    while (ss >> b)
    {
        if (b == c)
        {
            f = -1;
            break;
        }
        
    }

    if (f == -1)
    {
        cout << "YES";
    }
    else{


        cout << "NO";
    }
    


    return 0;
}