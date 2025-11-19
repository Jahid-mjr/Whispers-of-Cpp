#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cin.ignore();
    string x;
    // cin.getline(x,100);
    getline(cin,x);

    cout << a << "\n" << x << endl;



    return 0;
}