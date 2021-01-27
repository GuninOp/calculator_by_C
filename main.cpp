#include <iostream>
using namespace std;

int main()
{
    while (true){
        int a, b;
        string c;
        cout << "Enter 1st number " << endl;
        cin >> a;
        cout << "Enter 2nd number " << endl;
        cin >> b;
        cout<<"Enter a opertation" << endl;
        cin >> c;
        int d;
        if (c == "*"){
            d = a * b;
            cout<<"The result is "<<d<<endl;
        }

        else if (c == "/"){
            d = a / b;
            cout<<"The result is "<<(float)d<<endl;
        }

        else if (c == "+"){
            d = a + b;
            cout<<"The result is "<<d<<endl;
        }


        else if (c == "remainder"){
            d = a % b;
            cout<<"The result is "<<d<<endl;
        }

        else
        {
            d = a - b;
            cout<<"The result is "<<d<<endl;
        }
    }    
    return 0;
}
