#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double d = 23.65965;
    cout << d << endl;
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}