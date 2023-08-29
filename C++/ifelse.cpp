#include<iostream>
using namespace std;
int main(void) {
    int a,b,c;
    cout<<"Value of a : ";
    cin>>a;
    cout<<"Value of b : ";
    cin>>b;
    cout<<"Value of c : ";
    cin>>c;

    if(a>b) {
        if(a>c)
        {
            cout<<"Largest number is "<<a;
        }
        else
        {
            cout<<"Largest number is "<<c;
        }
    }
    else {
        if(b>c)
        {
            cout<<"Largest number is "<<b;
        }
        else
        {
            cout<<"Largest number is "<<c;
        }
    }

}

