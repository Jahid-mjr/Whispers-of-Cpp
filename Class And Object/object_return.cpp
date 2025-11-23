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




Student fun(){

    Student jahid(12,8,23);
    return jahid;



}





int main()
{
    ios::sync_with_stdio(false); // Speeds up I/O
    //cin.tie(nullptr);





    Student obj = fun();


    cout << obj.roll << " " << obj.cls << " " << obj.age;
    
    return 0;
}