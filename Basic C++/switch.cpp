#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {

        case 1 :
        cout << "Sat\n";
        break;

        case 2 :
        cout << "Sun\n";
        break;

        case 3 :
        cout << "Mon\n";
        break;

        default :
        cout << "Out\n";
    }
 

    
    return 0;
}