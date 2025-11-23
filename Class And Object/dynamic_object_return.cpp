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

    Student* p = new Student(12,12,6);
    return p;



}



int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);




    Student* pp = fun();


    cout << pp->roll << " " << pp->cls << " " << pp->age;

    
    return 0;
}