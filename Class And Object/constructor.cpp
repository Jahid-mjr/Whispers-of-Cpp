#include <bits/stdc++.h>
using namespace std;

class Student
{

public:

    int roll;
    int cls;
    int age;


    Student(int r, int c, int a){

        roll = r;
        cls = c;
        age = a;
    }


};

int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);


    // Student jahid;
    // jahid.roll = 12;
    // jahid.cls = 12;
    // jahid.age = 23;


    Student jahid(12,12,23);



    cout << jahid.roll << " " << jahid.cls << " " << jahid.age;
    
    return 0;
}