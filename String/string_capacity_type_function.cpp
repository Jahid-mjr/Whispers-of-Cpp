#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);
    string s = "hellow world";
    cout << s.size() << endl;
    cout << s.max_size() << endl; // 10^6 porjonto rakha jay
    cout << s.capacity() << endl;



    // s.resize(4);
    // cout << s << endl;

    s.resize(20,'A');
    cout << s << endl;


    
    s.clear();
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl; // size dekhe
    return 0;
}