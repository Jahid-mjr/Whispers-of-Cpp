#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);

    string s = "hello world";
    string s1 = "hi";
    // s +=s1;
    // s.append(s1);

    // s.push_back('a');
    // s.pop_back();


    // s = "Gello";
    // s = s1;
    // s.assign("Gello");



    // s.erase(3); // index 3 theke sob delete
    // s.erase(3,3); // 3 theke 2 ta char delete



    // s.replace(6,5,"Bangladesh"); // 6 number giya 5 ta char delete kore "Ba..." ta add koro
    // jodi chat delete na korte chai tai majer ta 0 dibo


    s.insert(5, "jahid");

    cout << s << endl;
    
    return 0;
}