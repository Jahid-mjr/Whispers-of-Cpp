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




};

bool cmp(Student l, Student r){

    if (l.e == r.e)
    {
       
        return (l.m == r.m) ? (l.id < r.id) : (l.m > r.m);



    }
    else{


        return l.e > r.e;

    }
    
   


}

int main()
{

    int n;
    cin >> n;


    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].m >> a[i].e;
       
    }
    

    sort(a,a+n,cmp);



    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].m << " " << a[i].e << endl;
    }
    
    
    return 0;
}