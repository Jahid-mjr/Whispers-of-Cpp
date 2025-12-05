#include <bits/stdc++.h>
using namespace std;


int* sort_it(int n){

    int* p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p,p+n,greater<int>());

    return p;
    




}
int main()
{
    int x;
    cin >> x;
    int * a = sort_it(x);

    for (int i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}