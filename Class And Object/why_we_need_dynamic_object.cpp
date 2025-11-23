#include <bits/stdc++.h>
using namespace std;

class Student
{

public:

    int roll;
    int cls;
    int age;


    Student(int roll, int cls, int age){

        this->roll = roll;
        this->cls = cls;
        this->age = age;
    }


};




Student* fun(){

    Student jahid(12,8,23);
    Student* p = &jahid;
    return p;



}





int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);





    Student* pp = fun();


    cout << pp->roll << " " << pp->cls << " " << pp->age;
    //tik tak value astese na. tai akhon dynamic object lagbe
    
    return 0;
}