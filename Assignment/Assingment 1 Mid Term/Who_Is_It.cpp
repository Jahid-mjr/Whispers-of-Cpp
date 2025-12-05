#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    int id;
    string name;
    char sec;
    int mark;




};
int main()
{
    int t;
    cin >> t;
    while(t--){

        Student x,y,z;
        cin >> x.id >> x.name >> x.sec >> x.mark;
        cin >> y.id >> y.name >> y.sec >> y.mark;
        cin >> z.id >> z.name >> z.sec >> z.mark;


        if (x.mark == y.mark && y.mark == z.mark)
        {
            if (x.id < y.id && x.id < z.id)
            {
                cout << x.id << " "<< x.name << " " << x.sec << " " << x.mark << endl;
            }
            else if (y.id < x.id && y.id < z.id)
            {
                cout << y.id << " "<< y.name << " " << y.sec << " " << y.mark << endl;
            }
            else
            {
                cout << z.id << " "<< z.name << " " << z.sec << " " << z.mark << endl;
            }
            
            
            
        }
        
        else if (x.mark == max({x.mark,y.mark,z.mark}))
        {
            if (x.mark == y.mark)
            {
                if (x.id < y.id)
                {
                    cout << x.id << " "<< x.name << " " << x.sec << " " << x.mark << endl;
                }
                else
                {
                    cout << y.id << " "<< y.name << " " << y.sec << " " << y.mark << endl;
                }
                
                
            }
            else if (x.mark == z.mark)
            {
                if (x.id < z.id)
                {
                    cout << x.id << " "<< x.name << " " << x.sec << " " << x.mark << endl;
                }
                else
                {
                    cout << z.id << " "<< z.name << " " << z.sec << " " << z.mark << endl;
                }
            }
            else
            {
                cout << x.id << " "<< x.name << " " << x.sec << " " << x.mark << endl;
            }
            

            
        }
        else if (y.mark == max({x.mark,y.mark,z.mark}))
        {
            if (x.mark == y.mark)
            {
                if (x.id < y.id)
                {
                    cout << x.id << " "<< x.name << " " << x.sec << " " << x.mark << endl;
                }
                else
                {
                    cout << y.id << " "<< y.name << " " << y.sec << " " << y.mark << endl;
                }
                
                
            }
            else if (y.mark == z.mark)
            {
                if (y.id < z.id)
                {
                    cout << y.id << " "<< y.name << " " << y.sec << " " << y.mark << endl;
                }
                else
                {
                    cout << z.id << " "<< z.name << " " << z.sec << " " << z.mark << endl;
                }
            }
            else
            {
                cout << y.id << " "<< y.name << " " << y.sec << " " << y.mark << endl;
            }
            

            
        }
        else
        {
             cout << z.id << " "<< z.name << " " << z.sec << " " << z.mark << endl;
        }
        






    }
    
    
    return 0;
}