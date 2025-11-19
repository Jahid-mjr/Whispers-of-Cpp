// #include <bits/stdc++.h>
// using namespace std;

// int *p;

// void fun(){


//     int x = 10;

//     p = &x;
//     cout << *p << endl;


// }
// int main()
// {


//     fun();
//     cout << *p << endl; // aikhane 0 asbe ba kisui asbe na
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int *p;
void fun(){

    int *x = new int;
    *x = 10;
    p = x;

    cout << *p << endl;
    return;




}

int main()
{


    fun();
    cout << *p << endl;
    return 0;
}