// static array

// #include <bits/stdc++.h>
// using namespace std;

// int* fun(){


//     int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }

//     return a;
    

    
// }
// int main()
// {

//     int* x = fun();

//     for (int i = 0; i < 5; i++)
//     {
//        cout << x[i];   // segmentation fult hobe aron oi array ta r exist i kore na
//     }
    

//     return 0;
// }


//...............................
// dynamic array

#include <bits/stdc++.h>
using namespace std;

int* fun(){

    int* a = new int[5];

    for (int i = 0; i < 5 ; i++)
    {
        cin >> a[i];
    }
    





    return a;
}

int main()
{

    int* p = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    


    return 0;
}