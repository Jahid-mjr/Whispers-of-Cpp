#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string s = "Hello";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    

    // cout << *s.begin() << endl;
    // cout << *s.end() << endl; // null ke point kore
    // cout << *(s.end()-1) << endl;



    // for (string :: iterator  it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }


    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    



    return 0;
}