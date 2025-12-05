#include <bits/stdc++.h>
using namespace std;

class Student {


    public:
    string nm;
    int cls;
    char s;
    int id;
    int m;
    int e;
    int t;




};

bool cmp(Student l, Student r){

    return (l.t == r.t) ? (l.id < r.id ) : (l.t > r.t);


}

int main()
{

    int n;
    cin >> n;


    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].m >> a[i].e;
        a[i].t = a[i].e + a[i].m;
    }
    

    sort(a,a+n,cmp);



    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].m << " " << a[i].e << endl;
    }
    
    
    return 0;
}