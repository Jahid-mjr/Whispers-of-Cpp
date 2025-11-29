#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    
    string s;

    getline(cin,s);

    cout << s << endl;


    stringstream ss(s);
    int cnt = 0;
    string word;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    while (ss >> word)
    {
        cout << word << endl;
        cnt++;
    }
    cout<< cnt << endl;
    






    return 0;
}